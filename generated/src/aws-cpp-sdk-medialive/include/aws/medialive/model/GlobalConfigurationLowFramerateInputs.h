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
enum class GlobalConfigurationLowFramerateInputs { NOT_SET, DISABLED, ENABLED };

namespace GlobalConfigurationLowFramerateInputsMapper {
AWS_MEDIALIVE_API GlobalConfigurationLowFramerateInputs GetGlobalConfigurationLowFramerateInputsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForGlobalConfigurationLowFramerateInputs(GlobalConfigurationLowFramerateInputs value);
}  // namespace GlobalConfigurationLowFramerateInputsMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
