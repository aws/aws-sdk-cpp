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
  enum class CustomizationFeature
  {
    NOT_SET,
    CONTENT_MODERATION,
    CUSTOM_LABELS
  };

namespace CustomizationFeatureMapper
{
AWS_REKOGNITION_API CustomizationFeature GetCustomizationFeatureForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForCustomizationFeature(CustomizationFeature value);
} // namespace CustomizationFeatureMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
