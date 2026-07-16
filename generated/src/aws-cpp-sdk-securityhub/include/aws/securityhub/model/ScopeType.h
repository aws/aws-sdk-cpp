/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class ScopeType { NOT_SET, TENANT, SUBSCRIPTION };

namespace ScopeTypeMapper {
AWS_SECURITYHUB_API ScopeType GetScopeTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForScopeType(ScopeType value);
}  // namespace ScopeTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
