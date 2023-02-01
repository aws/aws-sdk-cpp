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
  enum class ListOperationsSortAttributeName
  {
    NOT_SET,
    SubmittedDate
  };

namespace ListOperationsSortAttributeNameMapper
{
AWS_ROUTE53DOMAINS_API ListOperationsSortAttributeName GetListOperationsSortAttributeNameForName(const Aws::String& name);

AWS_ROUTE53DOMAINS_API Aws::String GetNameForListOperationsSortAttributeName(ListOperationsSortAttributeName value);
} // namespace ListOperationsSortAttributeNameMapper
} // namespace Model
} // namespace Route53Domains
} // namespace Aws
