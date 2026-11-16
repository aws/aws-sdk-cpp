/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
enum class FilterOperator { NOT_SET, EQUALS, NOT_EQUALS, IN, CONTAINS };

namespace FilterOperatorMapper {
AWS_NETWORKFLOWMONITOR_API FilterOperator GetFilterOperatorForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForFilterOperator(FilterOperator value);
}  // namespace FilterOperatorMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
