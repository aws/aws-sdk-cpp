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
enum class M2tsSegmentationStyle { NOT_SET, MAINTAIN_CADENCE, RESET_CADENCE };

namespace M2tsSegmentationStyleMapper {
AWS_MEDIALIVE_API M2tsSegmentationStyle GetM2tsSegmentationStyleForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsSegmentationStyle(M2tsSegmentationStyle value);
}  // namespace M2tsSegmentationStyleMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
