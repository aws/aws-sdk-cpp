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
  enum class TargetStore
  {
    NOT_SET,
    OnlineStore,
    OfflineStore
  };

namespace TargetStoreMapper
{
AWS_SAGEMAKERFEATURESTORERUNTIME_API TargetStore GetTargetStoreForName(const Aws::String& name);

AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String GetNameForTargetStore(TargetStore value);
} // namespace TargetStoreMapper
} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
