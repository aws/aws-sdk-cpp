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
enum class CelebrityRecognitionSortBy { NOT_SET, ID, TIMESTAMP };

namespace CelebrityRecognitionSortByMapper {
AWS_REKOGNITION_API CelebrityRecognitionSortBy GetCelebrityRecognitionSortByForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForCelebrityRecognitionSortBy(CelebrityRecognitionSortBy value);
}  // namespace CelebrityRecognitionSortByMapper
}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
