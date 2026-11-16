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
enum class PreferenceStatus { NOT_SET, ENABLED, DISABLED, FAILED };

namespace PreferenceStatusMapper {
AWS_WELLARCHITECTED_API PreferenceStatus GetPreferenceStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForPreferenceStatus(PreferenceStatus value);
}  // namespace PreferenceStatusMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
