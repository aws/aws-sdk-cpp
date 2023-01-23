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
  enum class ResettableElementName
  {
    NOT_SET,
    FullyQualifiedDomainName,
    Regions,
    ResourcePath,
    ChildHealthChecks
  };

namespace ResettableElementNameMapper
{
AWS_ROUTE53_API ResettableElementName GetResettableElementNameForName(const Aws::String& name);

AWS_ROUTE53_API Aws::String GetNameForResettableElementName(ResettableElementName value);
} // namespace ResettableElementNameMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
