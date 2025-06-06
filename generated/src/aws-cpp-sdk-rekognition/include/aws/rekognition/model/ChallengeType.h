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
  enum class ChallengeType
  {
    NOT_SET,
    FaceMovementAndLightChallenge,
    FaceMovementChallenge
  };

namespace ChallengeTypeMapper
{
AWS_REKOGNITION_API ChallengeType GetChallengeTypeForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForChallengeType(ChallengeType value);
} // namespace ChallengeTypeMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
