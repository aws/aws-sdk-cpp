/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class ProjectAutoUpdate
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ProjectAutoUpdateMapper
{
AWS_REKOGNITION_API ProjectAutoUpdate GetProjectAutoUpdateForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForProjectAutoUpdate(ProjectAutoUpdate value);
} // namespace ProjectAutoUpdateMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
