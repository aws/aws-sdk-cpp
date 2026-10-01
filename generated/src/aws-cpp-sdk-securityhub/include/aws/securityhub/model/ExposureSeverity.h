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
enum class ExposureSeverity { NOT_SET, Informational, Low, Medium, High, Critical };

namespace ExposureSeverityMapper {
AWS_SECURITYHUB_API ExposureSeverity GetExposureSeverityForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForExposureSeverity(ExposureSeverity value);
}  // namespace ExposureSeverityMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
