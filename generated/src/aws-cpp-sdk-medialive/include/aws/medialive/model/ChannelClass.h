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
  enum class ChannelClass
  {
    NOT_SET,
    STANDARD,
    SINGLE_PIPELINE
  };

namespace ChannelClassMapper
{
AWS_MEDIALIVE_API ChannelClass GetChannelClassForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForChannelClass(ChannelClass value);
} // namespace ChannelClassMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
