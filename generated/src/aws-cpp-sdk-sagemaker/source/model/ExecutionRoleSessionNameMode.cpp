/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ExecutionRoleSessionNameMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ExecutionRoleSessionNameModeMapper {

static const int STATIC__HASH = HashingUtils::HashString("STATIC");
static const int USER_IDENTITY_HASH = HashingUtils::HashString("USER_IDENTITY");

ExecutionRoleSessionNameMode GetExecutionRoleSessionNameModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STATIC__HASH) {
    return ExecutionRoleSessionNameMode::STATIC_;
  } else if (hashCode == USER_IDENTITY_HASH) {
    return ExecutionRoleSessionNameMode::USER_IDENTITY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExecutionRoleSessionNameMode>(hashCode);
  }

  return ExecutionRoleSessionNameMode::NOT_SET;
}

Aws::String GetNameForExecutionRoleSessionNameMode(ExecutionRoleSessionNameMode enumValue) {
  switch (enumValue) {
    case ExecutionRoleSessionNameMode::NOT_SET:
      return {};
    case ExecutionRoleSessionNameMode::STATIC_:
      return "STATIC";
    case ExecutionRoleSessionNameMode::USER_IDENTITY:
      return "USER_IDENTITY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExecutionRoleSessionNameModeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
