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
  enum class ReservationResourceType
  {
    NOT_SET,
    INPUT,
    OUTPUT,
    MULTIPLEX,
    CHANNEL
  };

namespace ReservationResourceTypeMapper
{
AWS_MEDIALIVE_API ReservationResourceType GetReservationResourceTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForReservationResourceType(ReservationResourceType value);
} // namespace ReservationResourceTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
