/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/MPA_EXPORTS.h>

namespace Aws {
namespace MPA {
namespace Model {
enum class AdditionalSecurityRequirement { NOT_SET, APPROVER_VERIFICATION_REQUIRED };

namespace AdditionalSecurityRequirementMapper {
AWS_MPA_API AdditionalSecurityRequirement GetAdditionalSecurityRequirementForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForAdditionalSecurityRequirement(AdditionalSecurityRequirement value);
}  // namespace AdditionalSecurityRequirementMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
