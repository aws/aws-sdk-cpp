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
enum class EndpointType { NOT_SET, PUBLIC_, PRIVATE_ };

namespace EndpointTypeMapper {
AWS_ROUTE53_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForEndpointType(EndpointType value);
}  // namespace EndpointTypeMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
