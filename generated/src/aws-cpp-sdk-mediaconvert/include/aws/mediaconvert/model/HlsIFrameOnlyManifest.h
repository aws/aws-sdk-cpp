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
  enum class HlsIFrameOnlyManifest
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace HlsIFrameOnlyManifestMapper
{
AWS_MEDIACONVERT_API HlsIFrameOnlyManifest GetHlsIFrameOnlyManifestForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsIFrameOnlyManifest(HlsIFrameOnlyManifest value);
} // namespace HlsIFrameOnlyManifestMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
