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
  enum class ClusterSortBy
  {
    NOT_SET,
    CREATION_TIME,
    NAME
  };

namespace ClusterSortByMapper
{
AWS_SAGEMAKER_API ClusterSortBy GetClusterSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterSortBy(ClusterSortBy value);
} // namespace ClusterSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
