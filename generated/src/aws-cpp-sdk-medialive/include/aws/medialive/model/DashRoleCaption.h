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
  enum class DashRoleCaption
  {
    NOT_SET,
    ALTERNATE,
    CAPTION,
    COMMENTARY,
    DESCRIPTION,
    DUB,
    EASYREADER,
    EMERGENCY,
    FORCED_SUBTITLE,
    KARAOKE,
    MAIN,
    METADATA,
    SUBTITLE,
    SUPPLEMENTARY
  };

namespace DashRoleCaptionMapper
{
AWS_MEDIALIVE_API DashRoleCaption GetDashRoleCaptionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDashRoleCaption(DashRoleCaption value);
} // namespace DashRoleCaptionMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
