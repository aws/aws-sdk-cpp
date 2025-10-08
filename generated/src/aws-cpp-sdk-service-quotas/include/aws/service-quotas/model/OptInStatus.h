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
  enum class OptInStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace OptInStatusMapper
{
AWS_SERVICEQUOTAS_API OptInStatus GetOptInStatusForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForOptInStatus(OptInStatus value);
} // namespace OptInStatusMapper
} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
