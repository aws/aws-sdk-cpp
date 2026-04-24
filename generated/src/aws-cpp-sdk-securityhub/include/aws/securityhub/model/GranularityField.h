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
enum class GranularityField { NOT_SET, Daily, Weekly, Monthly };

namespace GranularityFieldMapper {
AWS_SECURITYHUB_API GranularityField GetGranularityFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForGranularityField(GranularityField value);
}  // namespace GranularityFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
