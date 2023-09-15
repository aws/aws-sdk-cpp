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
  enum class AppliedLevelEnum
  {
    NOT_SET,
    ACCOUNT,
    RESOURCE,
    ALL
  };

namespace AppliedLevelEnumMapper
{
AWS_SERVICEQUOTAS_API AppliedLevelEnum GetAppliedLevelEnumForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForAppliedLevelEnum(AppliedLevelEnum value);
} // namespace AppliedLevelEnumMapper
} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
