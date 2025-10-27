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
enum class Statistic { NOT_SET, Average, Sum, SampleCount, Maximum, Minimum };

namespace StatisticMapper {
AWS_ROUTE53_API Statistic GetStatisticForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForStatistic(Statistic value);
}  // namespace StatisticMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
