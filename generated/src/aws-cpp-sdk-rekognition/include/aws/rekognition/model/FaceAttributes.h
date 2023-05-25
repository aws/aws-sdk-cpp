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
  enum class FaceAttributes
  {
    NOT_SET,
    DEFAULT,
    ALL
  };

namespace FaceAttributesMapper
{
AWS_REKOGNITION_API FaceAttributes GetFaceAttributesForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForFaceAttributes(FaceAttributes value);
} // namespace FaceAttributesMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
