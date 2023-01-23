/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class CmafManifestDurationFormat
  {
    NOT_SET,
    FLOATING_POINT,
    INTEGER
  };

namespace CmafManifestDurationFormatMapper
{
AWS_MEDIACONVERT_API CmafManifestDurationFormat GetCmafManifestDurationFormatForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafManifestDurationFormat(CmafManifestDurationFormat value);
} // namespace CmafManifestDurationFormatMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
