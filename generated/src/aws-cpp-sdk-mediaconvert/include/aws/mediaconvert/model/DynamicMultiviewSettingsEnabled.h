/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class DynamicMultiviewSettingsEnabled { NOT_SET, DISABLED, ENABLED };

namespace DynamicMultiviewSettingsEnabledMapper {
AWS_MEDIACONVERT_API DynamicMultiviewSettingsEnabled GetDynamicMultiviewSettingsEnabledForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDynamicMultiviewSettingsEnabled(DynamicMultiviewSettingsEnabled value);
}  // namespace DynamicMultiviewSettingsEnabledMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
