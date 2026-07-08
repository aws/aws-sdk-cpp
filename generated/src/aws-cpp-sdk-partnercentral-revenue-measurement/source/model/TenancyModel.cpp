/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/TenancyModel.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace TenancyModelMapper {

static const int MULTI_TENANT_HASH = HashingUtils::HashString("MULTI_TENANT");
static const int SINGLE_TENANT_HASH = HashingUtils::HashString("SINGLE_TENANT");

TenancyModel GetTenancyModelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MULTI_TENANT_HASH) {
    return TenancyModel::MULTI_TENANT;
  } else if (hashCode == SINGLE_TENANT_HASH) {
    return TenancyModel::SINGLE_TENANT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TenancyModel>(hashCode);
  }

  return TenancyModel::NOT_SET;
}

Aws::String GetNameForTenancyModel(TenancyModel enumValue) {
  switch (enumValue) {
    case TenancyModel::NOT_SET:
      return {};
    case TenancyModel::MULTI_TENANT:
      return "MULTI_TENANT";
    case TenancyModel::SINGLE_TENANT:
      return "SINGLE_TENANT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TenancyModelMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
