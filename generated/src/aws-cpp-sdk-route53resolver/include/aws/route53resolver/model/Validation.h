/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{
  enum class Validation
  {
    NOT_SET,
    ENABLE,
    DISABLE,
    USE_LOCAL_RESOURCE_SETTING
  };

namespace ValidationMapper
{
AWS_ROUTE53RESOLVER_API Validation GetValidationForName(const Aws::String& name);

AWS_ROUTE53RESOLVER_API Aws::String GetNameForValidation(Validation value);
} // namespace ValidationMapper
} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
