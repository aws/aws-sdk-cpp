/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class ExecutionStage { NOT_SET, MAPPING, CODE_GENERATION, DEPLOY, DEPLOYED_STACKS_DELETION, ANALYZE };

namespace ExecutionStageMapper {
AWS_MGN_API ExecutionStage GetExecutionStageForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForExecutionStage(ExecutionStage value);
}  // namespace ExecutionStageMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
