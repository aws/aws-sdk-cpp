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
enum class GcpScopeType { NOT_SET, PROJECT, ORGANIZATION };

namespace GcpScopeTypeMapper {
AWS_SECURITYHUB_API GcpScopeType GetGcpScopeTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForGcpScopeType(GcpScopeType value);
}  // namespace GcpScopeTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
