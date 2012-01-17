#ifndef __PARSEPKG__
#define __PARSEPKG__

#include <rpm/rpmlib.h>
#include <glib.h>
#include "constants.h"
#include "package.h"
#include "xml_dump.h"

/*
Package *parse_package(Header hdr, gint64 mtime, gint64 size, const char *checksum, const char *checksum_type,
                      const char *location_href, const char *location_base,
                      int changelog_limit, gint64 hdr_start, gint64 hdr_end);
*/
struct XmlStruct xml_from_package_file(const char *filename, ChecksumType checksum_type,
                        const char *location_href, const char *location_base,
                        int changelog_limit);

#endif /* __PARSEPKG__ */