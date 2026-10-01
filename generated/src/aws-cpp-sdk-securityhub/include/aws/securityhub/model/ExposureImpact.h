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
enum class ExposureImpact { NOT_SET, Reduces, Resolves, Unchanged };

namespace ExposureImpactMapper {
AWS_SECURITYHUB_API ExposureImpact GetExposureImpactForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForExposureImpact(ExposureImpact value);
}  // namespace ExposureImpactMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
