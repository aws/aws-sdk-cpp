/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{
  enum class PredicateType
  {
    NOT_SET,
    IPMatch,
    ByteMatch,
    SqlInjectionMatch,
    GeoMatch,
    SizeConstraint,
    XssMatch,
    RegexMatch
  };

namespace PredicateTypeMapper
{
AWS_WAFREGIONAL_API PredicateType GetPredicateTypeForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForPredicateType(PredicateType value);
} // namespace PredicateTypeMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
