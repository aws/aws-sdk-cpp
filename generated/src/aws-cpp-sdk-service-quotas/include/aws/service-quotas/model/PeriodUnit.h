/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{
  enum class PeriodUnit
  {
    NOT_SET,
    MICROSECOND,
    MILLISECOND,
    SECOND,
    MINUTE,
    HOUR,
    DAY,
    WEEK
  };

namespace PeriodUnitMapper
{
AWS_SERVICEQUOTAS_API PeriodUnit GetPeriodUnitForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForPeriodUnit(PeriodUnit value);
} // namespace PeriodUnitMapper
} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
