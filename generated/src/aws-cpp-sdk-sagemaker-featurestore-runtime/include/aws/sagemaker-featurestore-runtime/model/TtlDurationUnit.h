/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
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
AWS_SAGEMAKERFEATURESTORERUNTIME_API TtlDurationUnit GetTtlDurationUnitForName(const Aws::String& name);

AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String GetNameForTtlDurationUnit(TtlDurationUnit value);
} // namespace TtlDurationUnitMapper
} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
