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
enum class BurnInAlignment { NOT_SET, CENTERED, LEFT, SMART };

namespace BurnInAlignmentMapper {
AWS_MEDIALIVE_API BurnInAlignment GetBurnInAlignmentForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForBurnInAlignment(BurnInAlignment value);
}  // namespace BurnInAlignmentMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
