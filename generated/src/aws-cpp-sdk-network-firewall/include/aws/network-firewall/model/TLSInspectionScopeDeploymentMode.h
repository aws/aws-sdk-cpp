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
enum class TLSInspectionScopeDeploymentMode { NOT_SET, TRANSPARENT_FIREWALL_ONLY, EXPLICIT_PROXY_ONLY, ALL };

namespace TLSInspectionScopeDeploymentModeMapper {
AWS_NETWORKFIREWALL_API TLSInspectionScopeDeploymentMode GetTLSInspectionScopeDeploymentModeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForTLSInspectionScopeDeploymentMode(TLSInspectionScopeDeploymentMode value);
}  // namespace TLSInspectionScopeDeploymentModeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
