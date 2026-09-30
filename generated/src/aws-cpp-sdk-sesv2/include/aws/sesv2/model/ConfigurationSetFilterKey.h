/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class ConfigurationSetFilterKey { NOT_SET, CONFIGURATION_SET_NAME_CONTAINS };

namespace ConfigurationSetFilterKeyMapper {
AWS_SESV2_API ConfigurationSetFilterKey GetConfigurationSetFilterKeyForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForConfigurationSetFilterKey(ConfigurationSetFilterKey value);
}  // namespace ConfigurationSetFilterKeyMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
