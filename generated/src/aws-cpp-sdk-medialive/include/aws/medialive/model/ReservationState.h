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
  enum class ReservationState
  {
    NOT_SET,
    ACTIVE,
    EXPIRED,
    CANCELED,
    DELETED
  };

namespace ReservationStateMapper
{
AWS_MEDIALIVE_API ReservationState GetReservationStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForReservationState(ReservationState value);
} // namespace ReservationStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
