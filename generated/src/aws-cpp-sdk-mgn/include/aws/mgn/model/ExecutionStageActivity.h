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
enum class ExecutionStageActivity { NOT_SET, MAPPING, MAPPING_UPDATE, CODE_GENERATION, DEPLOY, DEPLOYED_STACKS_DELETION, ANALYZE };

namespace ExecutionStageActivityMapper {
AWS_MGN_API ExecutionStageActivity GetExecutionStageActivityForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForExecutionStageActivity(ExecutionStageActivity value);
}  // namespace ExecutionStageActivityMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
