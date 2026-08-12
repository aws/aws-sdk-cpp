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
enum class Priority { NOT_SET, HIGH, MEDIUM, LOW };

namespace PriorityMapper {
AWS_WELLARCHITECTED_API Priority GetPriorityForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForPriority(Priority value);
}  // namespace PriorityMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
