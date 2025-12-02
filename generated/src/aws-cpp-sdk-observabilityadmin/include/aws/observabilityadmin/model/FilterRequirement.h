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
enum class FilterRequirement { NOT_SET, MEETS_ALL, MEETS_ANY };

namespace FilterRequirementMapper {
AWS_OBSERVABILITYADMIN_API FilterRequirement GetFilterRequirementForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForFilterRequirement(FilterRequirement value);
}  // namespace FilterRequirementMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
