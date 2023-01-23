/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class ApplicationInstanceHealthStatus
  {
    NOT_SET,
    RUNNING,
    ERROR_,
    NOT_AVAILABLE
  };

namespace ApplicationInstanceHealthStatusMapper
{
AWS_PANORAMA_API ApplicationInstanceHealthStatus GetApplicationInstanceHealthStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForApplicationInstanceHealthStatus(ApplicationInstanceHealthStatus value);
} // namespace ApplicationInstanceHealthStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
