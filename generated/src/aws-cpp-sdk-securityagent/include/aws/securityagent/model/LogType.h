/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class LogType { NOT_SET, CLOUDWATCH };

namespace LogTypeMapper {
AWS_SECURITYAGENT_API LogType GetLogTypeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForLogType(LogType value);
}  // namespace LogTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
