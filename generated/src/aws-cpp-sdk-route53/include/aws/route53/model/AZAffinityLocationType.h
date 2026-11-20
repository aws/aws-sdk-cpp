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
enum class AZAffinityLocationType { NOT_SET, AvailabilityZone, AvailabilityZoneGroup, Region, Partition, Global };

namespace AZAffinityLocationTypeMapper {
AWS_ROUTE53_API AZAffinityLocationType GetAZAffinityLocationTypeForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForAZAffinityLocationType(AZAffinityLocationType value);
}  // namespace AZAffinityLocationTypeMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
