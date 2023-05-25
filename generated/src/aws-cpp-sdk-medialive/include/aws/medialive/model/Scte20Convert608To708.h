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
  enum class Scte20Convert608To708
  {
    NOT_SET,
    DISABLED,
    UPCONVERT
  };

namespace Scte20Convert608To708Mapper
{
AWS_MEDIALIVE_API Scte20Convert608To708 GetScte20Convert608To708ForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte20Convert608To708(Scte20Convert608To708 value);
} // namespace Scte20Convert608To708Mapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
