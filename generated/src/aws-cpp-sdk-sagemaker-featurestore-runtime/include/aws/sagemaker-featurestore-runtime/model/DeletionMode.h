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
  enum class DeletionMode
  {
    NOT_SET,
    SoftDelete,
    HardDelete
  };

namespace DeletionModeMapper
{
AWS_SAGEMAKERFEATURESTORERUNTIME_API DeletionMode GetDeletionModeForName(const Aws::String& name);

AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String GetNameForDeletionMode(DeletionMode value);
} // namespace DeletionModeMapper
} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
