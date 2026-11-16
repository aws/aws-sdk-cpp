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
enum class ProfileType { NOT_SET, STANDARD, BASIC, ORGANIZATIONAL };

namespace ProfileTypeMapper {
AWS_WELLARCHITECTED_API ProfileType GetProfileTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForProfileType(ProfileType value);
}  // namespace ProfileTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
