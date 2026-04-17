/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class ElementalInferenceFeature { NOT_SET, SMART_CROP };

namespace ElementalInferenceFeatureMapper {
AWS_MEDIACONVERT_API ElementalInferenceFeature GetElementalInferenceFeatureForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForElementalInferenceFeature(ElementalInferenceFeature value);
}  // namespace ElementalInferenceFeatureMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
