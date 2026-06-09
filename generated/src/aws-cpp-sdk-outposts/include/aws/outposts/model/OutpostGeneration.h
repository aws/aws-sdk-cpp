/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class OutpostGeneration { NOT_SET, GENERATION_2, GENERATION_1 };

namespace OutpostGenerationMapper {
AWS_OUTPOSTS_API OutpostGeneration GetOutpostGenerationForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForOutpostGeneration(OutpostGeneration value);
}  // namespace OutpostGenerationMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
