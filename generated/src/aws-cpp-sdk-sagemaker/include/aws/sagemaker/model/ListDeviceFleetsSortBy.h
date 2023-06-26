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
  enum class ListDeviceFleetsSortBy
  {
    NOT_SET,
    NAME,
    CREATION_TIME,
    LAST_MODIFIED_TIME
  };

namespace ListDeviceFleetsSortByMapper
{
AWS_SAGEMAKER_API ListDeviceFleetsSortBy GetListDeviceFleetsSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListDeviceFleetsSortBy(ListDeviceFleetsSortBy value);
} // namespace ListDeviceFleetsSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
