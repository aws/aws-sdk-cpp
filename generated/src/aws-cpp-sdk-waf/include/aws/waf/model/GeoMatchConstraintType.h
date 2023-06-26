/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAF
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
AWS_WAF_API GeoMatchConstraintType GetGeoMatchConstraintTypeForName(const Aws::String& name);

AWS_WAF_API Aws::String GetNameForGeoMatchConstraintType(GeoMatchConstraintType value);
} // namespace GeoMatchConstraintTypeMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
