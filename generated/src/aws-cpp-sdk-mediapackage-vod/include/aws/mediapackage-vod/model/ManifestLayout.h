/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{
  enum class ManifestLayout
  {
    NOT_SET,
    FULL,
    COMPACT
  };

namespace ManifestLayoutMapper
{
AWS_MEDIAPACKAGEVOD_API ManifestLayout GetManifestLayoutForName(const Aws::String& name);

AWS_MEDIAPACKAGEVOD_API Aws::String GetNameForManifestLayout(ManifestLayout value);
} // namespace ManifestLayoutMapper
} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
