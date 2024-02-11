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
  enum class UnsuccessfulFaceDeletionReason
  {
    NOT_SET,
    ASSOCIATED_TO_AN_EXISTING_USER,
    FACE_NOT_FOUND
  };

namespace UnsuccessfulFaceDeletionReasonMapper
{
AWS_REKOGNITION_API UnsuccessfulFaceDeletionReason GetUnsuccessfulFaceDeletionReasonForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForUnsuccessfulFaceDeletionReason(UnsuccessfulFaceDeletionReason value);
} // namespace UnsuccessfulFaceDeletionReasonMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
