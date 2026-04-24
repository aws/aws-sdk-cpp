/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>

namespace Aws {
namespace SecurityIR {
namespace Model {
enum class EngagementType { NOT_SET, Security_Incident, Investigation };

namespace EngagementTypeMapper {
AWS_SECURITYIR_API EngagementType GetEngagementTypeForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForEngagementType(EngagementType value);
}  // namespace EngagementTypeMapper
}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
