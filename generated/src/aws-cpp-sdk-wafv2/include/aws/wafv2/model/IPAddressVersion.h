/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class IPAddressVersion { NOT_SET, IPV4, IPV6 };

namespace IPAddressVersionMapper {
AWS_WAFV2_API IPAddressVersion GetIPAddressVersionForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForIPAddressVersion(IPAddressVersion value);
}  // namespace IPAddressVersionMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
