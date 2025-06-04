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
  enum class Mp4C2paManifest
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace Mp4C2paManifestMapper
{
AWS_MEDIACONVERT_API Mp4C2paManifest GetMp4C2paManifestForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMp4C2paManifest(Mp4C2paManifest value);
} // namespace Mp4C2paManifestMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
