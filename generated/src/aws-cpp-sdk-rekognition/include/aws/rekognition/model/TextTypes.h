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
enum class TextTypes { NOT_SET, LINE, WORD };

namespace TextTypesMapper {
AWS_REKOGNITION_API TextTypes GetTextTypesForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForTextTypes(TextTypes value);
}  // namespace TextTypesMapper
}  // namespace Model
}  // namespace Rekognition
}  // namespace Aws
