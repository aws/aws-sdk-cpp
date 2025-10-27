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
enum class H265MvTemporalPredictor { NOT_SET, DISABLED, ENABLED };

namespace H265MvTemporalPredictorMapper {
AWS_MEDIALIVE_API H265MvTemporalPredictor GetH265MvTemporalPredictorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265MvTemporalPredictor(H265MvTemporalPredictor value);
}  // namespace H265MvTemporalPredictorMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
