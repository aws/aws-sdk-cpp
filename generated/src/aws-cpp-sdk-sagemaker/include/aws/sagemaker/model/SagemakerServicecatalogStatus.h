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
  enum class SagemakerServicecatalogStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace SagemakerServicecatalogStatusMapper
{
AWS_SAGEMAKER_API SagemakerServicecatalogStatus GetSagemakerServicecatalogStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSagemakerServicecatalogStatus(SagemakerServicecatalogStatus value);
} // namespace SagemakerServicecatalogStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
