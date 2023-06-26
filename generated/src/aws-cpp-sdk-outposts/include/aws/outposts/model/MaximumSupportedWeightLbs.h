/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class MaximumSupportedWeightLbs
  {
    NOT_SET,
    NO_LIMIT,
    MAX_1400_LBS,
    MAX_1600_LBS,
    MAX_1800_LBS,
    MAX_2000_LBS
  };

namespace MaximumSupportedWeightLbsMapper
{
AWS_OUTPOSTS_API MaximumSupportedWeightLbs GetMaximumSupportedWeightLbsForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForMaximumSupportedWeightLbs(MaximumSupportedWeightLbs value);
} // namespace MaximumSupportedWeightLbsMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
