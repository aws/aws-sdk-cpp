/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/ManagedServicesAttestationTypeSortName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace ManagedServicesAttestationTypeSortNameMapper {

static const int UpdatedAt_HASH = HashingUtils::HashString("UpdatedAt");

ManagedServicesAttestationTypeSortName GetManagedServicesAttestationTypeSortNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UpdatedAt_HASH) {
    return ManagedServicesAttestationTypeSortName::UpdatedAt;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedServicesAttestationTypeSortName>(hashCode);
  }

  return ManagedServicesAttestationTypeSortName::NOT_SET;
}

Aws::String GetNameForManagedServicesAttestationTypeSortName(ManagedServicesAttestationTypeSortName enumValue) {
  switch (enumValue) {
    case ManagedServicesAttestationTypeSortName::NOT_SET:
      return {};
    case ManagedServicesAttestationTypeSortName::UpdatedAt:
      return "UpdatedAt";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedServicesAttestationTypeSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
