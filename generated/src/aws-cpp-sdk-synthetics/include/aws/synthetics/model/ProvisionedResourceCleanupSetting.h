/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class ProvisionedResourceCleanupSetting
  {
    NOT_SET,
    AUTOMATIC,
    OFF
  };

namespace ProvisionedResourceCleanupSettingMapper
{
AWS_SYNTHETICS_API ProvisionedResourceCleanupSetting GetProvisionedResourceCleanupSettingForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForProvisionedResourceCleanupSetting(ProvisionedResourceCleanupSetting value);
} // namespace ProvisionedResourceCleanupSettingMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
