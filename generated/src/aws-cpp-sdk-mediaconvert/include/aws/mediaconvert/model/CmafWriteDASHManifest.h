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
  enum class CmafWriteDASHManifest
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace CmafWriteDASHManifestMapper
{
AWS_MEDIACONVERT_API CmafWriteDASHManifest GetCmafWriteDASHManifestForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafWriteDASHManifest(CmafWriteDASHManifest value);
} // namespace CmafWriteDASHManifestMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
