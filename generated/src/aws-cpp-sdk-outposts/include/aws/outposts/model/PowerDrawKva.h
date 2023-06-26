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
  enum class PowerDrawKva
  {
    NOT_SET,
    POWER_5_KVA,
    POWER_10_KVA,
    POWER_15_KVA,
    POWER_30_KVA
  };

namespace PowerDrawKvaMapper
{
AWS_OUTPOSTS_API PowerDrawKva GetPowerDrawKvaForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForPowerDrawKva(PowerDrawKva value);
} // namespace PowerDrawKvaMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
