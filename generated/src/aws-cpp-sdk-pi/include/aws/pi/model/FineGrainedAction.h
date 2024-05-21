/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PI
{
namespace Model
{
  enum class FineGrainedAction
  {
    NOT_SET,
    DescribeDimensionKeys,
    GetDimensionKeyDetails,
    GetResourceMetrics
  };

namespace FineGrainedActionMapper
{
AWS_PI_API FineGrainedAction GetFineGrainedActionForName(const Aws::String& name);

AWS_PI_API Aws::String GetNameForFineGrainedAction(FineGrainedAction value);
} // namespace FineGrainedActionMapper
} // namespace Model
} // namespace PI
} // namespace Aws
