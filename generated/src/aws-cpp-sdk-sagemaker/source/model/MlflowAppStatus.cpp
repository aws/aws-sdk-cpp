/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/MlflowAppStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace MlflowAppStatusMapper {

static const int Creating_HASH = HashingUtils::HashString("Creating");
static const int Created_HASH = HashingUtils::HashString("Created");
static const int CreateFailed_HASH = HashingUtils::HashString("CreateFailed");
static const int Updating_HASH = HashingUtils::HashString("Updating");
static const int Updated_HASH = HashingUtils::HashString("Updated");
static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");
static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");
static const int Deleted_HASH = HashingUtils::HashString("Deleted");

MlflowAppStatus GetMlflowAppStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Creating_HASH) {
    return MlflowAppStatus::Creating;
  } else if (hashCode == Created_HASH) {
    return MlflowAppStatus::Created;
  } else if (hashCode == CreateFailed_HASH) {
    return MlflowAppStatus::CreateFailed;
  } else if (hashCode == Updating_HASH) {
    return MlflowAppStatus::Updating;
  } else if (hashCode == Updated_HASH) {
    return MlflowAppStatus::Updated;
  } else if (hashCode == UpdateFailed_HASH) {
    return MlflowAppStatus::UpdateFailed;
  } else if (hashCode == Deleting_HASH) {
    return MlflowAppStatus::Deleting;
  } else if (hashCode == DeleteFailed_HASH) {
    return MlflowAppStatus::DeleteFailed;
  } else if (hashCode == Deleted_HASH) {
    return MlflowAppStatus::Deleted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MlflowAppStatus>(hashCode);
  }

  return MlflowAppStatus::NOT_SET;
}

Aws::String GetNameForMlflowAppStatus(MlflowAppStatus enumValue) {
  switch (enumValue) {
    case MlflowAppStatus::NOT_SET:
      return {};
    case MlflowAppStatus::Creating:
      return "Creating";
    case MlflowAppStatus::Created:
      return "Created";
    case MlflowAppStatus::CreateFailed:
      return "CreateFailed";
    case MlflowAppStatus::Updating:
      return "Updating";
    case MlflowAppStatus::Updated:
      return "Updated";
    case MlflowAppStatus::UpdateFailed:
      return "UpdateFailed";
    case MlflowAppStatus::Deleting:
      return "Deleting";
    case MlflowAppStatus::DeleteFailed:
      return "DeleteFailed";
    case MlflowAppStatus::Deleted:
      return "Deleted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MlflowAppStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
