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
  enum class StudioWebPortal
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace StudioWebPortalMapper
{
AWS_SAGEMAKER_API StudioWebPortal GetStudioWebPortalForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForStudioWebPortal(StudioWebPortal value);
} // namespace StudioWebPortalMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
