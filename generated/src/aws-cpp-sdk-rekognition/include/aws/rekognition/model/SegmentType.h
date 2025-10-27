/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>

namespace Aws {
namespace Rekognition {
namespace Model {
enum class SegmentType { NOT_SET, TECHNICAL_CUE, SHOT };

namespace SegmentTypeMapper {
AWS_REKOGNITION_API SegmentType GetSegmentTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForSegmentType(SegmentType value);
}  // namespace SegmentTypeMapper
}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
