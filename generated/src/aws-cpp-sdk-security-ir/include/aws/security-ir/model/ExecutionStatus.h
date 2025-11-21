/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>

namespace Aws {
namespace SecurityIR {
namespace Model {
enum class ExecutionStatus { NOT_SET, Pending, InProgress, Waiting, Completed, Failed, Cancelled };

namespace ExecutionStatusMapper {
AWS_SECURITYIR_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
}  // namespace ExecutionStatusMapper
}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
