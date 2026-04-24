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
enum class Av1TimecodeInsertionBehavior { NOT_SET, DISABLED, METADATA_OBU };

namespace Av1TimecodeInsertionBehaviorMapper {
AWS_MEDIALIVE_API Av1TimecodeInsertionBehavior GetAv1TimecodeInsertionBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAv1TimecodeInsertionBehavior(Av1TimecodeInsertionBehavior value);
}  // namespace Av1TimecodeInsertionBehaviorMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
