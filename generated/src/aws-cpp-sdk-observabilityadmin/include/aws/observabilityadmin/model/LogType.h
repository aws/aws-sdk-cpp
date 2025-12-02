/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class LogType { NOT_SET, APPLICATION_LOGS, USAGE_LOGS };

namespace LogTypeMapper {
AWS_OBSERVABILITYADMIN_API LogType GetLogTypeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForLogType(LogType value);
}  // namespace LogTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
