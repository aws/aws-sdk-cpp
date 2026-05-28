/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class DependencyCriticality { NOT_SET, HARD, SOFT, UNKNOWN };

namespace DependencyCriticalityMapper {
AWS_RESILIENCEHUBV2_API DependencyCriticality GetDependencyCriticalityForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForDependencyCriticality(DependencyCriticality value);
}  // namespace DependencyCriticalityMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
