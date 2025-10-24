/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

namespace Aws {
namespace ResilienceHub {
namespace Model {
enum class DriftType { NOT_SET, ApplicationCompliance, AppComponentResiliencyComplianceStatus };

namespace DriftTypeMapper {
AWS_RESILIENCEHUB_API DriftType GetDriftTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForDriftType(DriftType value);
}  // namespace DriftTypeMapper
}  // namespace Model
}  // namespace ResilienceHub
}  // namespace Aws
