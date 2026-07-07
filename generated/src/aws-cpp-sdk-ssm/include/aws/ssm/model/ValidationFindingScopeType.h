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
enum class ValidationFindingScopeType { NOT_SET, azure_tenant, azure_subscription };

namespace ValidationFindingScopeTypeMapper {
AWS_SSM_API ValidationFindingScopeType GetValidationFindingScopeTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForValidationFindingScopeType(ValidationFindingScopeType value);
}  // namespace ValidationFindingScopeTypeMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
