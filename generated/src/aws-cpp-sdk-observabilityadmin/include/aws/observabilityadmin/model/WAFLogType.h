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
enum class WAFLogType { NOT_SET, WAF_LOGS };

namespace WAFLogTypeMapper {
AWS_OBSERVABILITYADMIN_API WAFLogType GetWAFLogTypeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForWAFLogType(WAFLogType value);
}  // namespace WAFLogTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
