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
enum class IntegrationStatus { NOT_SET, ACTIVE, DELETING };

namespace IntegrationStatusMapper {
AWS_OBSERVABILITYADMIN_API IntegrationStatus GetIntegrationStatusForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForIntegrationStatus(IntegrationStatus value);
}  // namespace IntegrationStatusMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
