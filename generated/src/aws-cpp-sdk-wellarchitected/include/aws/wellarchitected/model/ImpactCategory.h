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
enum class ImpactCategory { NOT_SET, HIGH, MEDIUM, LOW };

namespace ImpactCategoryMapper {
AWS_WELLARCHITECTED_API ImpactCategory GetImpactCategoryForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForImpactCategory(ImpactCategory value);
}  // namespace ImpactCategoryMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
