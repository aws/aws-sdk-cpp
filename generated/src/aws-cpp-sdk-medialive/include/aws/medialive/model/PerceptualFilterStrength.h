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
enum class PerceptualFilterStrength { NOT_SET, STRENGTH_1, STRENGTH_2 };

namespace PerceptualFilterStrengthMapper {
AWS_MEDIALIVE_API PerceptualFilterStrength GetPerceptualFilterStrengthForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForPerceptualFilterStrength(PerceptualFilterStrength value);
}  // namespace PerceptualFilterStrengthMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
