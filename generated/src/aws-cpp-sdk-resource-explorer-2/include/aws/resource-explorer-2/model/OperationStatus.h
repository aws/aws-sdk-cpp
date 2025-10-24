/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {
enum class OperationStatus { NOT_SET, SUCCEEDED, FAILED, IN_PROGRESS, SKIPPED };

namespace OperationStatusMapper {
AWS_RESOURCEEXPLORER2_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_RESOURCEEXPLORER2_API Aws::String GetNameForOperationStatus(OperationStatus value);
}  // namespace OperationStatusMapper
}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
