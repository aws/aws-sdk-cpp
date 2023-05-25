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
  enum class StreamProcessorParameterToDelete
  {
    NOT_SET,
    ConnectedHomeMinConfidence,
    RegionsOfInterest
  };

namespace StreamProcessorParameterToDeleteMapper
{
AWS_REKOGNITION_API StreamProcessorParameterToDelete GetStreamProcessorParameterToDeleteForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForStreamProcessorParameterToDelete(StreamProcessorParameterToDelete value);
} // namespace StreamProcessorParameterToDeleteMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
