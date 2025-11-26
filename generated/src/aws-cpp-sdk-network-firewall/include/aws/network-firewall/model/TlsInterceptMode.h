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
enum class TlsInterceptMode { NOT_SET, ENABLED, DISABLED };

namespace TlsInterceptModeMapper {
AWS_NETWORKFIREWALL_API TlsInterceptMode GetTlsInterceptModeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForTlsInterceptMode(TlsInterceptMode value);
}  // namespace TlsInterceptModeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
