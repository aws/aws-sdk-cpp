/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class HlsIvInManifest
  {
    NOT_SET,
    EXCLUDE,
    INCLUDE
  };

namespace HlsIvInManifestMapper
{
AWS_MEDIALIVE_API HlsIvInManifest GetHlsIvInManifestForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsIvInManifest(HlsIvInManifest value);
} // namespace HlsIvInManifestMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
