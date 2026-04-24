/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

namespace Aws {
namespace MediaLive {
namespace Model {
enum class ReservationResolution { NOT_SET, SD, HD, FHD, UHD };

namespace ReservationResolutionMapper {
AWS_MEDIALIVE_API ReservationResolution GetReservationResolutionForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForReservationResolution(ReservationResolution value);
}  // namespace ReservationResolutionMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
