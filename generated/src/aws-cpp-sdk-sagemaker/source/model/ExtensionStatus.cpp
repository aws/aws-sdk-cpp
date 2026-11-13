/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ExtensionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ExtensionStatusMapper {

static const int Creating_HASH = HashingUtils::HashString("Creating");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int CreateFailed_HASH = HashingUtils::HashString("CreateFailed");
static const int Updating_HASH = HashingUtils::HashString("Updating");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");
static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");
static const int Degraded_HASH = HashingUtils::HashString("Degraded");
static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");

ExtensionStatus GetExtensionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Creating_HASH) {
    return ExtensionStatus::Creating;
  } else if (hashCode == Active_HASH) {
    return ExtensionStatus::Active;
  } else if (hashCode == CreateFailed_HASH) {
    return ExtensionStatus::CreateFailed;
  } else if (hashCode == Updating_HASH) {
    return ExtensionStatus::Updating;
  } else if (hashCode == Deleting_HASH) {
    return ExtensionStatus::Deleting;
  } else if (hashCode == DeleteFailed_HASH) {
    return ExtensionStatus::DeleteFailed;
  } else if (hashCode == Degraded_HASH) {
    return ExtensionStatus::Degraded;
  } else if (hashCode == UpdateFailed_HASH) {
    return ExtensionStatus::UpdateFailed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExtensionStatus>(hashCode);
  }

  return ExtensionStatus::NOT_SET;
}

Aws::String GetNameForExtensionStatus(ExtensionStatus enumValue) {
  switch (enumValue) {
    case ExtensionStatus::NOT_SET:
      return {};
    case ExtensionStatus::Creating:
      return "Creating";
    case ExtensionStatus::Active:
      return "Active";
    case ExtensionStatus::CreateFailed:
      return "CreateFailed";
    case ExtensionStatus::Updating:
      return "Updating";
    case ExtensionStatus::Deleting:
      return "Deleting";
    case ExtensionStatus::DeleteFailed:
      return "DeleteFailed";
    case ExtensionStatus::Degraded:
      return "Degraded";
    case ExtensionStatus::UpdateFailed:
      return "UpdateFailed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExtensionStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
