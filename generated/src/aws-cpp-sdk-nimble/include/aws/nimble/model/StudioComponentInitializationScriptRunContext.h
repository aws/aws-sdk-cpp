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
  enum class StudioComponentInitializationScriptRunContext
  {
    NOT_SET,
    SYSTEM_INITIALIZATION,
    USER_INITIALIZATION
  };

namespace StudioComponentInitializationScriptRunContextMapper
{
AWS_NIMBLESTUDIO_API StudioComponentInitializationScriptRunContext GetStudioComponentInitializationScriptRunContextForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStudioComponentInitializationScriptRunContext(StudioComponentInitializationScriptRunContext value);
} // namespace StudioComponentInitializationScriptRunContextMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
