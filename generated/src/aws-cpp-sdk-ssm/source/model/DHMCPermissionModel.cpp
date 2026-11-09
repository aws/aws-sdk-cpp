/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/model/DHMCPermissionModel.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {
namespace DHMCPermissionModelMapper {

static const int SERVICE_MANAGED_HASH = HashingUtils::HashString("SERVICE_MANAGED");
static const int SELF_MANAGED_HASH = HashingUtils::HashString("SELF_MANAGED");

DHMCPermissionModel GetDHMCPermissionModelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_MANAGED_HASH) {
    return DHMCPermissionModel::SERVICE_MANAGED;
  } else if (hashCode == SELF_MANAGED_HASH) {
    return DHMCPermissionModel::SELF_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DHMCPermissionModel>(hashCode);
  }

  return DHMCPermissionModel::NOT_SET;
}

Aws::String GetNameForDHMCPermissionModel(DHMCPermissionModel enumValue) {
  switch (enumValue) {
    case DHMCPermissionModel::NOT_SET:
      return {};
    case DHMCPermissionModel::SERVICE_MANAGED:
      return "SERVICE_MANAGED";
    case DHMCPermissionModel::SELF_MANAGED:
      return "SELF_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DHMCPermissionModelMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
