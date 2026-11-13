/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/model/CloudConnectorFilterKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {
namespace CloudConnectorFilterKeyMapper {

static const int SubscriptionId_HASH = HashingUtils::HashString("SubscriptionId");
static const int TenantId_HASH = HashingUtils::HashString("TenantId");
static const int ProjectId_HASH = HashingUtils::HashString("ProjectId");
static const int OrganizationId_HASH = HashingUtils::HashString("OrganizationId");

CloudConnectorFilterKey GetCloudConnectorFilterKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SubscriptionId_HASH) {
    return CloudConnectorFilterKey::SubscriptionId;
  } else if (hashCode == TenantId_HASH) {
    return CloudConnectorFilterKey::TenantId;
  } else if (hashCode == ProjectId_HASH) {
    return CloudConnectorFilterKey::ProjectId;
  } else if (hashCode == OrganizationId_HASH) {
    return CloudConnectorFilterKey::OrganizationId;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CloudConnectorFilterKey>(hashCode);
  }

  return CloudConnectorFilterKey::NOT_SET;
}

Aws::String GetNameForCloudConnectorFilterKey(CloudConnectorFilterKey enumValue) {
  switch (enumValue) {
    case CloudConnectorFilterKey::NOT_SET:
      return {};
    case CloudConnectorFilterKey::SubscriptionId:
      return "SubscriptionId";
    case CloudConnectorFilterKey::TenantId:
      return "TenantId";
    case CloudConnectorFilterKey::ProjectId:
      return "ProjectId";
    case CloudConnectorFilterKey::OrganizationId:
      return "OrganizationId";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CloudConnectorFilterKeyMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
