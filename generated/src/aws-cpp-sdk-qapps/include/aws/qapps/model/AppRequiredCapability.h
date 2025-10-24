﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/QApps_EXPORTS.h>

namespace Aws {
namespace QApps {
namespace Model {
enum class AppRequiredCapability { NOT_SET, FileUpload, CreatorMode, RetrievalMode, PluginMode };

namespace AppRequiredCapabilityMapper {
AWS_QAPPS_API AppRequiredCapability GetAppRequiredCapabilityForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForAppRequiredCapability(AppRequiredCapability value);
}  // namespace AppRequiredCapabilityMapper
}  // namespace Model
}  // namespace QApps
}  // namespace Aws
