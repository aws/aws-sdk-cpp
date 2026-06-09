/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class OperationsInsightsStatus { NOT_SET, ENABLING, ENABLED, DISABLING, NOT_ENABLED, FAILED_ENABLING, FAILED_DISABLING };

namespace OperationsInsightsStatusMapper {
AWS_ODB_API OperationsInsightsStatus GetOperationsInsightsStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForOperationsInsightsStatus(OperationsInsightsStatus value);
}  // namespace OperationsInsightsStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
