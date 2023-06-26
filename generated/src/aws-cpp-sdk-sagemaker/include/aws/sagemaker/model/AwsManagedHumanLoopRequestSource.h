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
  enum class AwsManagedHumanLoopRequestSource
  {
    NOT_SET,
    AWS_Rekognition_DetectModerationLabels_Image_V3,
    AWS_Textract_AnalyzeDocument_Forms_V1
  };

namespace AwsManagedHumanLoopRequestSourceMapper
{
AWS_SAGEMAKER_API AwsManagedHumanLoopRequestSource GetAwsManagedHumanLoopRequestSourceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAwsManagedHumanLoopRequestSource(AwsManagedHumanLoopRequestSource value);
} // namespace AwsManagedHumanLoopRequestSourceMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
