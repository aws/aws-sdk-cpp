/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class MssManifestLayout
  {
    NOT_SET,
    FULL,
    COMPACT
  };

namespace MssManifestLayoutMapper
{
AWS_MEDIAPACKAGEV2_API MssManifestLayout GetMssManifestLayoutForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForMssManifestLayout(MssManifestLayout value);
} // namespace MssManifestLayoutMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
