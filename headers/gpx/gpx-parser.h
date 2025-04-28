#ifndef GPS_GPX_PARSER_H
#define GPS_GPX_PARSER_H

#include <vector>
#include <istream>

#include "timestampedwaypoint.h"

namespace GPS::GPX
{
  // Parse a stream of GPX data containing a track.
  std::vector<GPS::TimeStampedWaypoint> parseTrackStream(std::istream&);

  // Parse a GPX data string containing a track.
  std::vector<GPS::TimeStampedWaypoint> parseTrackString(const std::string&);

}

#endif
