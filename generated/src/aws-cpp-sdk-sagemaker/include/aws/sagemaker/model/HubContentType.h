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
  enum class HubContentType
  {
    NOT_SET,
    Model,
    Notebook
  };

namespace HubContentTypeMapper
{
AWS_SAGEMAKER_API HubContentType GetHubContentTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHubContentType(HubContentType value);
} // namespace HubContentTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
