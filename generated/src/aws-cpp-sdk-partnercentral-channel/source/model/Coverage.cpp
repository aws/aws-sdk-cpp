/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-channel/model/Coverage.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
namespace CoverageMapper {

static const int ENTIRE_ORGANIZATION_HASH = HashingUtils::HashString("ENTIRE_ORGANIZATION");
static const int MANAGEMENT_ACCOUNT_ONLY_HASH = HashingUtils::HashString("MANAGEMENT_ACCOUNT_ONLY");

Coverage GetCoverageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENTIRE_ORGANIZATION_HASH) {
    return Coverage::ENTIRE_ORGANIZATION;
  } else if (hashCode == MANAGEMENT_ACCOUNT_ONLY_HASH) {
    return Coverage::MANAGEMENT_ACCOUNT_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Coverage>(hashCode);
  }

  return Coverage::NOT_SET;
}

Aws::String GetNameForCoverage(Coverage enumValue) {
  switch (enumValue) {
    case Coverage::NOT_SET:
      return {};
    case Coverage::ENTIRE_ORGANIZATION:
      return "ENTIRE_ORGANIZATION";
    case Coverage::MANAGEMENT_ACCOUNT_ONLY:
      return "MANAGEMENT_ACCOUNT_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CoverageMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
