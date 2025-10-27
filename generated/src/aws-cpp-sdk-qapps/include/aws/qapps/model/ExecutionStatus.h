/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/QApps_EXPORTS.h>

namespace Aws {
namespace QApps {
namespace Model {
enum class ExecutionStatus { NOT_SET, IN_PROGRESS, WAITING, COMPLETED, ERROR_ };

namespace ExecutionStatusMapper {
AWS_QAPPS_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
}  // namespace ExecutionStatusMapper
}  // namespace Model
}  // namespace QApps
}  // namespace Aws
