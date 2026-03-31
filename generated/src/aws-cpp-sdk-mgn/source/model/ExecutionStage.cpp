/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/ExecutionStage.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace ExecutionStageMapper {

static const int MAPPING_HASH = HashingUtils::HashString("MAPPING");
static const int CODE_GENERATION_HASH = HashingUtils::HashString("CODE_GENERATION");
static const int DEPLOY_HASH = HashingUtils::HashString("DEPLOY");
static const int DEPLOYED_STACKS_DELETION_HASH = HashingUtils::HashString("DEPLOYED_STACKS_DELETION");
static const int ANALYZE_HASH = HashingUtils::HashString("ANALYZE");

ExecutionStage GetExecutionStageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MAPPING_HASH) {
    return ExecutionStage::MAPPING;
  } else if (hashCode == CODE_GENERATION_HASH) {
    return ExecutionStage::CODE_GENERATION;
  } else if (hashCode == DEPLOY_HASH) {
    return ExecutionStage::DEPLOY;
  } else if (hashCode == DEPLOYED_STACKS_DELETION_HASH) {
    return ExecutionStage::DEPLOYED_STACKS_DELETION;
  } else if (hashCode == ANALYZE_HASH) {
    return ExecutionStage::ANALYZE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExecutionStage>(hashCode);
  }

  return ExecutionStage::NOT_SET;
}

Aws::String GetNameForExecutionStage(ExecutionStage enumValue) {
  switch (enumValue) {
    case ExecutionStage::NOT_SET:
      return {};
    case ExecutionStage::MAPPING:
      return "MAPPING";
    case ExecutionStage::CODE_GENERATION:
      return "CODE_GENERATION";
    case ExecutionStage::DEPLOY:
      return "DEPLOY";
    case ExecutionStage::DEPLOYED_STACKS_DELETION:
      return "DEPLOYED_STACKS_DELETION";
    case ExecutionStage::ANALYZE:
      return "ANALYZE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExecutionStageMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
