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
  enum class ListEdgeDeploymentPlansSortBy
  {
    NOT_SET,
    NAME,
    DEVICE_FLEET_NAME,
    CREATION_TIME,
    LAST_MODIFIED_TIME
  };

namespace ListEdgeDeploymentPlansSortByMapper
{
AWS_SAGEMAKER_API ListEdgeDeploymentPlansSortBy GetListEdgeDeploymentPlansSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListEdgeDeploymentPlansSortBy(ListEdgeDeploymentPlansSortBy value);
} // namespace ListEdgeDeploymentPlansSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
