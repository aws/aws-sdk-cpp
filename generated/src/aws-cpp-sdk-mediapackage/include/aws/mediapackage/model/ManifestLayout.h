/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
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
AWS_MEDIAPACKAGE_API ManifestLayout GetManifestLayoutForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForManifestLayout(ManifestLayout value);
} // namespace ManifestLayoutMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
