/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/Redshift_EXPORTS.h>

namespace Aws {
namespace Redshift {
namespace Model {
enum class UsageLimitFeatureType {
  NOT_SET,
  spectrum,
  concurrency_scaling,
  cross_region_datasharing,
  extra_compute_for_automatic_optimization
};

namespace UsageLimitFeatureTypeMapper {
AWS_REDSHIFT_API UsageLimitFeatureType GetUsageLimitFeatureTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForUsageLimitFeatureType(UsageLimitFeatureType value);
}  // namespace UsageLimitFeatureTypeMapper
}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
