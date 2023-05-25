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
  enum class CmafInitializationVectorInManifest
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace CmafInitializationVectorInManifestMapper
{
AWS_MEDIACONVERT_API CmafInitializationVectorInManifest GetCmafInitializationVectorInManifestForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafInitializationVectorInManifest(CmafInitializationVectorInManifest value);
} // namespace CmafInitializationVectorInManifestMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
