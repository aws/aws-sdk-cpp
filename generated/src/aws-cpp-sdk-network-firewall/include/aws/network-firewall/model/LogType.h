/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Model {
enum class LogType { NOT_SET, ALERT, FLOW, TLS };

namespace LogTypeMapper {
AWS_NETWORKFIREWALL_API LogType GetLogTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForLogType(LogType value);
}  // namespace LogTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
