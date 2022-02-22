#pragma once

#include "MRMeshFwd.h"
#include "MRIOFilters.h"
#include <tl/expected.hpp>
#include <filesystem>
#include <istream>
#include <string>

namespace MR
{

namespace LinesLoad
{

MRMESH_API extern const IOFilters Filters;

// loads from .mrlines file
MRMESH_API tl::expected<Polyline, std::string> fromMrLines( const std::filesystem::path& file );
MRMESH_API tl::expected<Polyline, std::string> fromMrLines( std::istream& in );

// detects the format from file extension and loads polyline from it
MRMESH_API tl::expected<Polyline, std::string> fromAnySupportedFormat( const std::filesystem::path& file );

} //namespace LinesLoad

} //namespace MR