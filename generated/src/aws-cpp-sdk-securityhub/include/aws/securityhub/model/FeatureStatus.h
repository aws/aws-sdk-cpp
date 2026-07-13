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
enum class FeatureStatus { NOT_SET, ENABLED, DISABLED };

namespace FeatureStatusMapper {
AWS_SECURITYHUB_API FeatureStatus GetFeatureStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForFeatureStatus(FeatureStatus value);
}  // namespace FeatureStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
