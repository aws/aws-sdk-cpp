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
enum class OutputUsage { NOT_SET, MULTIVIEW_EQUAL_SIZE_VIEW, MULTIVIEW_PRIMARY_VIEW, MULTIVIEW_SECONDARY_VIEW };

namespace OutputUsageMapper {
AWS_MEDIALIVE_API OutputUsage GetOutputUsageForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForOutputUsage(OutputUsage value);
}  // namespace OutputUsageMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
