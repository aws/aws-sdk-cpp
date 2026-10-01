/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/RemediationStringField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace RemediationStringFieldMapper {

static const int Resource_Type_HASH = HashingUtils::HashString("Resource.Type");
static const int Priority_HASH = HashingUtils::HashString("Priority");
static const int Status_HASH = HashingUtils::HashString("Status");
static const int Resource_Id_HASH = HashingUtils::HashString("Resource.Id");
static const int Resource_ResourceOwnerAccountId_HASH = HashingUtils::HashString("Resource.ResourceOwnerAccountId");
static const int Resource_CloudProvider_HASH = HashingUtils::HashString("Resource.CloudProvider");

RemediationStringField GetRemediationStringFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Resource_Type_HASH) {
    return RemediationStringField::Resource_Type;
  } else if (hashCode == Priority_HASH) {
    return RemediationStringField::Priority;
  } else if (hashCode == Status_HASH) {
    return RemediationStringField::Status;
  } else if (hashCode == Resource_Id_HASH) {
    return RemediationStringField::Resource_Id;
  } else if (hashCode == Resource_ResourceOwnerAccountId_HASH) {
    return RemediationStringField::Resource_ResourceOwnerAccountId;
  } else if (hashCode == Resource_CloudProvider_HASH) {
    return RemediationStringField::Resource_CloudProvider;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RemediationStringField>(hashCode);
  }

  return RemediationStringField::NOT_SET;
}

Aws::String GetNameForRemediationStringField(RemediationStringField enumValue) {
  switch (enumValue) {
    case RemediationStringField::NOT_SET:
      return {};
    case RemediationStringField::Resource_Type:
      return "Resource.Type";
    case RemediationStringField::Priority:
      return "Priority";
    case RemediationStringField::Status:
      return "Status";
    case RemediationStringField::Resource_Id:
      return "Resource.Id";
    case RemediationStringField::Resource_ResourceOwnerAccountId:
      return "Resource.ResourceOwnerAccountId";
    case RemediationStringField::Resource_CloudProvider:
      return "Resource.CloudProvider";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RemediationStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
