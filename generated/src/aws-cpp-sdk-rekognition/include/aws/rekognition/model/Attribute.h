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
  enum class Attribute
  {
    NOT_SET,
    DEFAULT,
    ALL,
    AGE_RANGE,
    BEARD,
    EMOTIONS,
    EYE_DIRECTION,
    EYEGLASSES,
    EYES_OPEN,
    GENDER,
    MOUTH_OPEN,
    MUSTACHE,
    FACE_OCCLUDED,
    SMILE,
    SUNGLASSES
  };

namespace AttributeMapper
{
AWS_REKOGNITION_API Attribute GetAttributeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForAttribute(Attribute value);
} // namespace AttributeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
