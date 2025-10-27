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
enum class EnabledAnalysisType { NOT_SET, TLS_SNI, HTTP_HOST };

namespace EnabledAnalysisTypeMapper {
AWS_NETWORKFIREWALL_API EnabledAnalysisType GetEnabledAnalysisTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForEnabledAnalysisType(EnabledAnalysisType value);
}  // namespace EnabledAnalysisTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
