/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class H264AllowExplicitWeightedPrediction { NOT_SET, DISABLED, ENABLED };

namespace H264AllowExplicitWeightedPredictionMapper {
AWS_MEDIALIVE_API H264AllowExplicitWeightedPrediction GetH264AllowExplicitWeightedPredictionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264AllowExplicitWeightedPrediction(H264AllowExplicitWeightedPrediction value);
}  // namespace H264AllowExplicitWeightedPredictionMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
