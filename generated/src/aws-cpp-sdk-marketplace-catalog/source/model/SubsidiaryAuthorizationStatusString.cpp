/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationStatusString.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
namespace SubsidiaryAuthorizationStatusStringMapper {

static const int Draft_HASH = HashingUtils::HashString("Draft");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int Restricted_HASH = HashingUtils::HashString("Restricted");

SubsidiaryAuthorizationStatusString GetSubsidiaryAuthorizationStatusStringForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Draft_HASH) {
    return SubsidiaryAuthorizationStatusString::Draft;
  } else if (hashCode == Active_HASH) {
    return SubsidiaryAuthorizationStatusString::Active;
  } else if (hashCode == Restricted_HASH) {
    return SubsidiaryAuthorizationStatusString::Restricted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubsidiaryAuthorizationStatusString>(hashCode);
  }

  return SubsidiaryAuthorizationStatusString::NOT_SET;
}

Aws::String GetNameForSubsidiaryAuthorizationStatusString(SubsidiaryAuthorizationStatusString enumValue) {
  switch (enumValue) {
    case SubsidiaryAuthorizationStatusString::NOT_SET:
      return {};
    case SubsidiaryAuthorizationStatusString::Draft:
      return "Draft";
    case SubsidiaryAuthorizationStatusString::Active:
      return "Active";
    case SubsidiaryAuthorizationStatusString::Restricted:
      return "Restricted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubsidiaryAuthorizationStatusStringMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
