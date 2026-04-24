/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/ExecutionStageActivity.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace ExecutionStageActivityMapper {

static const int MAPPING_HASH = HashingUtils::HashString("MAPPING");
static const int MAPPING_UPDATE_HASH = HashingUtils::HashString("MAPPING_UPDATE");
static const int CODE_GENERATION_HASH = HashingUtils::HashString("CODE_GENERATION");
static const int DEPLOY_HASH = HashingUtils::HashString("DEPLOY");
static const int DEPLOYED_STACKS_DELETION_HASH = HashingUtils::HashString("DEPLOYED_STACKS_DELETION");
static const int ANALYZE_HASH = HashingUtils::HashString("ANALYZE");

ExecutionStageActivity GetExecutionStageActivityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MAPPING_HASH) {
    return ExecutionStageActivity::MAPPING;
  } else if (hashCode == MAPPING_UPDATE_HASH) {
    return ExecutionStageActivity::MAPPING_UPDATE;
  } else if (hashCode == CODE_GENERATION_HASH) {
    return ExecutionStageActivity::CODE_GENERATION;
  } else if (hashCode == DEPLOY_HASH) {
    return ExecutionStageActivity::DEPLOY;
  } else if (hashCode == DEPLOYED_STACKS_DELETION_HASH) {
    return ExecutionStageActivity::DEPLOYED_STACKS_DELETION;
  } else if (hashCode == ANALYZE_HASH) {
    return ExecutionStageActivity::ANALYZE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExecutionStageActivity>(hashCode);
  }

  return ExecutionStageActivity::NOT_SET;
}

Aws::String GetNameForExecutionStageActivity(ExecutionStageActivity enumValue) {
  switch (enumValue) {
    case ExecutionStageActivity::NOT_SET:
      return {};
    case ExecutionStageActivity::MAPPING:
      return "MAPPING";
    case ExecutionStageActivity::MAPPING_UPDATE:
      return "MAPPING_UPDATE";
    case ExecutionStageActivity::CODE_GENERATION:
      return "CODE_GENERATION";
    case ExecutionStageActivity::DEPLOY:
      return "DEPLOY";
    case ExecutionStageActivity::DEPLOYED_STACKS_DELETION:
      return "DEPLOYED_STACKS_DELETION";
    case ExecutionStageActivity::ANALYZE:
      return "ANALYZE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExecutionStageActivityMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
