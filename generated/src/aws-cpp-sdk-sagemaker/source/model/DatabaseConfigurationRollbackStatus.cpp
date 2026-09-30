/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/DatabaseConfigurationRollbackStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace DatabaseConfigurationRollbackStatusMapper {

static const int NotApplicable_HASH = HashingUtils::HashString("NotApplicable");
static const int Reverted_HASH = HashingUtils::HashString("Reverted");
static const int RevertFailed_HASH = HashingUtils::HashString("RevertFailed");

DatabaseConfigurationRollbackStatus GetDatabaseConfigurationRollbackStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NotApplicable_HASH) {
    return DatabaseConfigurationRollbackStatus::NotApplicable;
  } else if (hashCode == Reverted_HASH) {
    return DatabaseConfigurationRollbackStatus::Reverted;
  } else if (hashCode == RevertFailed_HASH) {
    return DatabaseConfigurationRollbackStatus::RevertFailed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatabaseConfigurationRollbackStatus>(hashCode);
  }

  return DatabaseConfigurationRollbackStatus::NOT_SET;
}

Aws::String GetNameForDatabaseConfigurationRollbackStatus(DatabaseConfigurationRollbackStatus enumValue) {
  switch (enumValue) {
    case DatabaseConfigurationRollbackStatus::NOT_SET:
      return {};
    case DatabaseConfigurationRollbackStatus::NotApplicable:
      return "NotApplicable";
    case DatabaseConfigurationRollbackStatus::Reverted:
      return "Reverted";
    case DatabaseConfigurationRollbackStatus::RevertFailed:
      return "RevertFailed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatabaseConfigurationRollbackStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
