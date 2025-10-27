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
enum class RelativePosition { NOT_SET, BEFORE_PROGRAM, AFTER_PROGRAM };

namespace RelativePositionMapper {
AWS_MEDIATAILOR_API RelativePosition GetRelativePositionForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForRelativePosition(RelativePosition value);
}  // namespace RelativePositionMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
