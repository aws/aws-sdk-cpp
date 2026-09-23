/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws {
namespace mediapackagev2 {
namespace Model {
enum class ContentKeyPeriodTiming { NOT_SET, INDEX_ONLY, START_END_ONLY, INDEX_WITH_START_END };

namespace ContentKeyPeriodTimingMapper {
AWS_MEDIAPACKAGEV2_API ContentKeyPeriodTiming GetContentKeyPeriodTimingForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForContentKeyPeriodTiming(ContentKeyPeriodTiming value);
}  // namespace ContentKeyPeriodTimingMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
