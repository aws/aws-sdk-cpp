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
  enum class UnsuccessfulFaceDisassociationReason
  {
    NOT_SET,
    FACE_NOT_FOUND,
    ASSOCIATED_TO_A_DIFFERENT_USER
  };

namespace UnsuccessfulFaceDisassociationReasonMapper
{
AWS_REKOGNITION_API UnsuccessfulFaceDisassociationReason GetUnsuccessfulFaceDisassociationReasonForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForUnsuccessfulFaceDisassociationReason(UnsuccessfulFaceDisassociationReason value);
} // namespace UnsuccessfulFaceDisassociationReasonMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
