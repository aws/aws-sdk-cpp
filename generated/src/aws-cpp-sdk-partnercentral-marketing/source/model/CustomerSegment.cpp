/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/CustomerSegment.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace CustomerSegmentMapper {

static const int ENTERPRISE_HASH = HashingUtils::HashString("ENTERPRISE");
static const int SMB_HASH = HashingUtils::HashString("SMB");
static const int PUBLIC_SECTOR_HASH = HashingUtils::HashString("PUBLIC_SECTOR");
static const int ISV_HASH = HashingUtils::HashString("ISV");

CustomerSegment GetCustomerSegmentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENTERPRISE_HASH) {
    return CustomerSegment::ENTERPRISE;
  } else if (hashCode == SMB_HASH) {
    return CustomerSegment::SMB;
  } else if (hashCode == PUBLIC_SECTOR_HASH) {
    return CustomerSegment::PUBLIC_SECTOR;
  } else if (hashCode == ISV_HASH) {
    return CustomerSegment::ISV;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomerSegment>(hashCode);
  }

  return CustomerSegment::NOT_SET;
}

Aws::String GetNameForCustomerSegment(CustomerSegment enumValue) {
  switch (enumValue) {
    case CustomerSegment::NOT_SET:
      return {};
    case CustomerSegment::ENTERPRISE:
      return "ENTERPRISE";
    case CustomerSegment::SMB:
      return "SMB";
    case CustomerSegment::PUBLIC_SECTOR:
      return "PUBLIC_SECTOR";
    case CustomerSegment::ISV:
      return "ISV";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomerSegmentMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
