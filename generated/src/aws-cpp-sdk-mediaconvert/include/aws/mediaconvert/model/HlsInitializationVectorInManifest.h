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
  enum class HlsInitializationVectorInManifest
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace HlsInitializationVectorInManifestMapper
{
AWS_MEDIACONVERT_API HlsInitializationVectorInManifest GetHlsInitializationVectorInManifestForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsInitializationVectorInManifest(HlsInitializationVectorInManifest value);
} // namespace HlsInitializationVectorInManifestMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
