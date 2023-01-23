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
  enum class RateKey
  {
    NOT_SET,
    IP
  };

namespace RateKeyMapper
{
AWS_WAFREGIONAL_API RateKey GetRateKeyForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForRateKey(RateKey value);
} // namespace RateKeyMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
