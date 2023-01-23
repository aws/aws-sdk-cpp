/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53
{
namespace Model
{
  enum class CidrCollectionChangeAction
  {
    NOT_SET,
    PUT,
    DELETE_IF_EXISTS
  };

namespace CidrCollectionChangeActionMapper
{
AWS_ROUTE53_API CidrCollectionChangeAction GetCidrCollectionChangeActionForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForCidrCollectionChangeAction(CidrCollectionChangeAction value);
} // namespace CidrCollectionChangeActionMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
