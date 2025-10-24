﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws {
namespace mediapackagev2 {
namespace Model {
enum class AdMarkerHls { NOT_SET, DATERANGE, SCTE35_ENHANCED };

namespace AdMarkerHlsMapper {
AWS_MEDIAPACKAGEV2_API AdMarkerHls GetAdMarkerHlsForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForAdMarkerHls(AdMarkerHls value);
}  // namespace AdMarkerHlsMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
