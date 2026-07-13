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
enum class FeatureName { NOT_SET, NETWORK_SCANNING };

namespace FeatureNameMapper {
AWS_SECURITYHUB_API FeatureName GetFeatureNameForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForFeatureName(FeatureName value);
}  // namespace FeatureNameMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
