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
enum class H264ExplicitWeightedPrediction { NOT_SET, DISABLED, ENABLED };

namespace H264ExplicitWeightedPredictionMapper {
AWS_MEDIACONVERT_API H264ExplicitWeightedPrediction GetH264ExplicitWeightedPredictionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264ExplicitWeightedPrediction(H264ExplicitWeightedPrediction value);
}  // namespace H264ExplicitWeightedPredictionMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
