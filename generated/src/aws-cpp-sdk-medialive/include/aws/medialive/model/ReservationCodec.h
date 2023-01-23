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
  enum class ReservationCodec
  {
    NOT_SET,
    MPEG2,
    AVC,
    HEVC,
    AUDIO,
    LINK
  };

namespace ReservationCodecMapper
{
AWS_MEDIALIVE_API ReservationCodec GetReservationCodecForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForReservationCodec(ReservationCodec value);
} // namespace ReservationCodecMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
