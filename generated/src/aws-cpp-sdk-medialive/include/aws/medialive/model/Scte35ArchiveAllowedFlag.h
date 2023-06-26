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
  enum class Scte35ArchiveAllowedFlag
  {
    NOT_SET,
    ARCHIVE_NOT_ALLOWED,
    ARCHIVE_ALLOWED
  };

namespace Scte35ArchiveAllowedFlagMapper
{
AWS_MEDIALIVE_API Scte35ArchiveAllowedFlag GetScte35ArchiveAllowedFlagForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35ArchiveAllowedFlag(Scte35ArchiveAllowedFlag value);
} // namespace Scte35ArchiveAllowedFlagMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
