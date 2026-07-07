/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>

namespace Aws {
namespace SSM {
namespace Model {
enum class ValidationFindingType { NOT_SET, INFO, WARN, ERROR_ };

namespace ValidationFindingTypeMapper {
AWS_SSM_API ValidationFindingType GetValidationFindingTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForValidationFindingType(ValidationFindingType value);
}  // namespace ValidationFindingTypeMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
