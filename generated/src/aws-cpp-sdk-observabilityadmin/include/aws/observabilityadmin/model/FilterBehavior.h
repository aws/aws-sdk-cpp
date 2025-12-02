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
enum class FilterBehavior { NOT_SET, KEEP, DROP };

namespace FilterBehaviorMapper {
AWS_OBSERVABILITYADMIN_API FilterBehavior GetFilterBehaviorForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForFilterBehavior(FilterBehavior value);
}  // namespace FilterBehaviorMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
