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
  enum class UnsuccessfulFaceAssociationReason
  {
    NOT_SET,
    FACE_NOT_FOUND,
    ASSOCIATED_TO_A_DIFFERENT_USER,
    LOW_MATCH_CONFIDENCE
  };

namespace UnsuccessfulFaceAssociationReasonMapper
{
AWS_REKOGNITION_API UnsuccessfulFaceAssociationReason GetUnsuccessfulFaceAssociationReasonForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForUnsuccessfulFaceAssociationReason(UnsuccessfulFaceAssociationReason value);
} // namespace UnsuccessfulFaceAssociationReasonMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
