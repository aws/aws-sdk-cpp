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
enum class AbWatermarkerIdLength { NOT_SET, ID_2048, ID_512 };

namespace AbWatermarkerIdLengthMapper {
AWS_MEDIALIVE_API AbWatermarkerIdLength GetAbWatermarkerIdLengthForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAbWatermarkerIdLength(AbWatermarkerIdLength value);
}  // namespace AbWatermarkerIdLengthMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
