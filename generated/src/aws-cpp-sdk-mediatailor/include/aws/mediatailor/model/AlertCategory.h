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
enum class AlertCategory { NOT_SET, SCHEDULING_ERROR, PLAYBACK_WARNING, INFO };

namespace AlertCategoryMapper {
AWS_MEDIATAILOR_API AlertCategory GetAlertCategoryForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForAlertCategory(AlertCategory value);
}  // namespace AlertCategoryMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
