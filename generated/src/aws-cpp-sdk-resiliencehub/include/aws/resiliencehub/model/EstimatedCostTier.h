/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class EstimatedCostTier
  {
    NOT_SET,
    L1,
    L2,
    L3,
    L4
  };

namespace EstimatedCostTierMapper
{
AWS_RESILIENCEHUB_API EstimatedCostTier GetEstimatedCostTierForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForEstimatedCostTier(EstimatedCostTier value);
} // namespace EstimatedCostTierMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
