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
  enum class QuotaContextScope
  {
    NOT_SET,
    RESOURCE,
    ACCOUNT
  };

namespace QuotaContextScopeMapper
{
AWS_SERVICEQUOTAS_API QuotaContextScope GetQuotaContextScopeForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForQuotaContextScope(QuotaContextScope value);
} // namespace QuotaContextScopeMapper
} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
