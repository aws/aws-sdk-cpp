/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class StudioComponentType
  {
    NOT_SET,
    ACTIVE_DIRECTORY,
    SHARED_FILE_SYSTEM,
    COMPUTE_FARM,
    LICENSE_SERVICE,
    CUSTOM
  };

namespace StudioComponentTypeMapper
{
AWS_NIMBLESTUDIO_API StudioComponentType GetStudioComponentTypeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStudioComponentType(StudioComponentType value);
} // namespace StudioComponentTypeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
