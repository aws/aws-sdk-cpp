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
enum class ContextGraphStatus { NOT_SET, Healthy, Unhealthy, Provisioning };

namespace ContextGraphStatusMapper {
AWS_OBSERVABILITYADMIN_API ContextGraphStatus GetContextGraphStatusForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForContextGraphStatus(ContextGraphStatus value);
}  // namespace ContextGraphStatusMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
