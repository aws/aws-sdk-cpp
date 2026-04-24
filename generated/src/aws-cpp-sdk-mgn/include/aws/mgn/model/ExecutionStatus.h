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
enum class ExecutionStatus { NOT_SET, PENDING, STARTED, SUCCEEDED, FAILED };

namespace ExecutionStatusMapper {
AWS_MGN_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
}  // namespace ExecutionStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
