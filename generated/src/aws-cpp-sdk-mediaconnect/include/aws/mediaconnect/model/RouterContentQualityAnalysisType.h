/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class RouterContentQualityAnalysisType { NOT_SET, CONTENT_LEVEL };

namespace RouterContentQualityAnalysisTypeMapper {
AWS_MEDIACONNECT_API RouterContentQualityAnalysisType GetRouterContentQualityAnalysisTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForRouterContentQualityAnalysisType(RouterContentQualityAnalysisType value);
}  // namespace RouterContentQualityAnalysisTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
