/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/Sector.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace SectorMapper {

static const int COMMERCIAL_HASH = HashingUtils::HashString("COMMERCIAL");
static const int GOVERNMENT_HASH = HashingUtils::HashString("GOVERNMENT");
static const int GOVERNMENT_EXCEPTION_HASH = HashingUtils::HashString("GOVERNMENT_EXCEPTION");

Sector GetSectorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMMERCIAL_HASH) {
    return Sector::COMMERCIAL;
  } else if (hashCode == GOVERNMENT_HASH) {
    return Sector::GOVERNMENT;
  } else if (hashCode == GOVERNMENT_EXCEPTION_HASH) {
    return Sector::GOVERNMENT_EXCEPTION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Sector>(hashCode);
  }

  return Sector::NOT_SET;
}

Aws::String GetNameForSector(Sector enumValue) {
  switch (enumValue) {
    case Sector::NOT_SET:
      return {};
    case Sector::COMMERCIAL:
      return "COMMERCIAL";
    case Sector::GOVERNMENT:
      return "GOVERNMENT";
    case Sector::GOVERNMENT_EXCEPTION:
      return "GOVERNMENT_EXCEPTION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SectorMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
