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
  enum class KnownGenderType
  {
    NOT_SET,
    Male,
    Female,
    Nonbinary,
    Unlisted
  };

namespace KnownGenderTypeMapper
{
AWS_REKOGNITION_API KnownGenderType GetKnownGenderTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForKnownGenderType(KnownGenderType value);
} // namespace KnownGenderTypeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
