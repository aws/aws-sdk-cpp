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
  enum class ExpirationTimeResponse
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace ExpirationTimeResponseMapper
{
AWS_SAGEMAKERFEATURESTORERUNTIME_API ExpirationTimeResponse GetExpirationTimeResponseForName(const Aws::String& name);

AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String GetNameForExpirationTimeResponse(ExpirationTimeResponse value);
} // namespace ExpirationTimeResponseMapper
} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
