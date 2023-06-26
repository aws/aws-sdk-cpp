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
  enum class GeoMatchConstraintType
  {
    NOT_SET,
    Country
  };

namespace GeoMatchConstraintTypeMapper
{
AWS_WAFREGIONAL_API GeoMatchConstraintType GetGeoMatchConstraintTypeForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForGeoMatchConstraintType(GeoMatchConstraintType value);
} // namespace GeoMatchConstraintTypeMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
