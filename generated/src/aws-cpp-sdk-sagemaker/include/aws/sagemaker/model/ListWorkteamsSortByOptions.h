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
  enum class ListWorkteamsSortByOptions
  {
    NOT_SET,
    Name,
    CreateDate
  };

namespace ListWorkteamsSortByOptionsMapper
{
AWS_SAGEMAKER_API ListWorkteamsSortByOptions GetListWorkteamsSortByOptionsForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListWorkteamsSortByOptions(ListWorkteamsSortByOptions value);
} // namespace ListWorkteamsSortByOptionsMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
