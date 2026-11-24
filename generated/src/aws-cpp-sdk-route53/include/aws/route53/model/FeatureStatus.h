/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>

namespace Aws {
namespace Route53 {
namespace Model {
enum class FeatureStatus { NOT_SET, ENABLED, DISABLED, ENABLING, DISABLING };

namespace FeatureStatusMapper {
AWS_ROUTE53_API FeatureStatus GetFeatureStatusForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForFeatureStatus(FeatureStatus value);
}  // namespace FeatureStatusMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
