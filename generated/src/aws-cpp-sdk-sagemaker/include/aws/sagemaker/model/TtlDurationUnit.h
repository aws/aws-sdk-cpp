/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class TtlDurationUnit
  {
    NOT_SET,
    Seconds,
    Minutes,
    Hours,
    Days,
    Weeks
  };

namespace TtlDurationUnitMapper
{
AWS_SAGEMAKER_API TtlDurationUnit GetTtlDurationUnitForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTtlDurationUnit(TtlDurationUnit value);
} // namespace TtlDurationUnitMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
