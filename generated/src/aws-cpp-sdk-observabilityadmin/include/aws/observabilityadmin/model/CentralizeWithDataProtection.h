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
enum class CentralizeWithDataProtection { NOT_SET, ENABLED, DISABLED };

namespace CentralizeWithDataProtectionMapper {
AWS_OBSERVABILITYADMIN_API CentralizeWithDataProtection GetCentralizeWithDataProtectionForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForCentralizeWithDataProtection(CentralizeWithDataProtection value);
}  // namespace CentralizeWithDataProtectionMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
