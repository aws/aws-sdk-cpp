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
enum class HostedZoneTier { NOT_SET, STANDARD, ADVANCED };

namespace HostedZoneTierMapper {
AWS_ROUTE53_API HostedZoneTier GetHostedZoneTierForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForHostedZoneTier(HostedZoneTier value);
}  // namespace HostedZoneTierMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
