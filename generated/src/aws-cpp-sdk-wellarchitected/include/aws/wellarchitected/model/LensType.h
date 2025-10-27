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
enum class LensType { NOT_SET, AWS_OFFICIAL, CUSTOM_SHARED, CUSTOM_SELF };

namespace LensTypeMapper {
AWS_WELLARCHITECTED_API LensType GetLensTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForLensType(LensType value);
}  // namespace LensTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
