/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{
  enum class StatusFlag
  {
    NOT_SET,
    PENDING_ACCEPTANCE,
    PENDING_CUSTOMER_ACTION,
    PENDING_AUTHORIZATION,
    PENDING_PAYMENT_VERIFICATION,
    PENDING_SUPPORT_CASE
  };

namespace StatusFlagMapper
{
AWS_ROUTE53DOMAINS_API StatusFlag GetStatusFlagForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForStatusFlag(StatusFlag value);
} // namespace StatusFlagMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
