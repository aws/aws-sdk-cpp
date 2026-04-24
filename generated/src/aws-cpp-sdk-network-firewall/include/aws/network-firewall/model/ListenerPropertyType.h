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
enum class ListenerPropertyType { NOT_SET, HTTP, HTTPS };

namespace ListenerPropertyTypeMapper {
AWS_NETWORKFIREWALL_API ListenerPropertyType GetListenerPropertyTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForListenerPropertyType(ListenerPropertyType value);
}  // namespace ListenerPropertyTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
