/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class LabelDetectionFeatureName
  {
    NOT_SET,
    GENERAL_LABELS
  };

namespace LabelDetectionFeatureNameMapper
{
AWS_REKOGNITION_API LabelDetectionFeatureName GetLabelDetectionFeatureNameForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForLabelDetectionFeatureName(LabelDetectionFeatureName value);
} // namespace LabelDetectionFeatureNameMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
