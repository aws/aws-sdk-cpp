/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class Scope
  {
    NOT_SET,
    CLOUDFRONT,
    REGIONAL
  };

namespace ScopeMapper
{
AWS_WAFV2_API Scope GetScopeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForScope(Scope value);
} // namespace ScopeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
