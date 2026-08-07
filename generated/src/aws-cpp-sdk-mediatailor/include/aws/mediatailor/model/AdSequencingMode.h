/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Model {
enum class AdSequencingMode { NOT_SET, FOLLOW_AD_SEQUENCE, IGNORE_AD_SEQUENCE, FOLLOW_AD_SEQUENCE_ONLY_LIVE, FOLLOW_AD_SEQUENCE_ONLY_VOD };

namespace AdSequencingModeMapper {
AWS_MEDIATAILOR_API AdSequencingMode GetAdSequencingModeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForAdSequencingMode(AdSequencingMode value);
}  // namespace AdSequencingModeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
