/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class Effort { NOT_SET, LARGE, MEDIUM, SMALL };

namespace EffortMapper {
AWS_WELLARCHITECTED_API Effort GetEffortForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForEffort(Effort value);
}  // namespace EffortMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
