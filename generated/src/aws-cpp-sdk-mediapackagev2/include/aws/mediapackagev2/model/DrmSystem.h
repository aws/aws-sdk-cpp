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
enum class DrmSystem { NOT_SET, CLEAR_KEY_AES_128, FAIRPLAY, PLAYREADY, WIDEVINE, IRDETO };

namespace DrmSystemMapper {
AWS_MEDIAPACKAGEV2_API DrmSystem GetDrmSystemForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForDrmSystem(DrmSystem value);
}  // namespace DrmSystemMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
