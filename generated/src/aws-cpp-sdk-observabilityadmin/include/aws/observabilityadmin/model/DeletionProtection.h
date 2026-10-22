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
enum class DeletionProtection { NOT_SET, ENABLED };

namespace DeletionProtectionMapper {
AWS_OBSERVABILITYADMIN_API DeletionProtection GetDeletionProtectionForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForDeletionProtection(DeletionProtection value);
}  // namespace DeletionProtectionMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
