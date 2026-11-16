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
enum class PreferenceState { NOT_SET, ENABLED, DISABLED };

namespace PreferenceStateMapper {
AWS_WELLARCHITECTED_API PreferenceState GetPreferenceStateForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForPreferenceState(PreferenceState value);
}  // namespace PreferenceStateMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
