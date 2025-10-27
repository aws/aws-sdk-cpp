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
enum class ProfileOwnerType { NOT_SET, SELF, SHARED };

namespace ProfileOwnerTypeMapper {
AWS_WELLARCHITECTED_API ProfileOwnerType GetProfileOwnerTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForProfileOwnerType(ProfileOwnerType value);
}  // namespace ProfileOwnerTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
