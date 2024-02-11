/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace repostspace
{
namespace Model
{
  enum class ConfigurationStatus
  {
    NOT_SET,
    CONFIGURED,
    UNCONFIGURED
  };

namespace ConfigurationStatusMapper
{
AWS_REPOSTSPACE_API ConfigurationStatus GetConfigurationStatusForName(const Aws::String& name);

AWS_REPOSTSPACE_API Aws::String GetNameForConfigurationStatus(ConfigurationStatus value);
} // namespace ConfigurationStatusMapper
} // namespace Model
} // namespace repostspace
} // namespace Aws
