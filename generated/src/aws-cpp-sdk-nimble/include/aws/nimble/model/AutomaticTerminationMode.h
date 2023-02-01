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
  enum class AutomaticTerminationMode
  {
    NOT_SET,
    DEACTIVATED,
    ACTIVATED
  };

namespace AutomaticTerminationModeMapper
{
AWS_NIMBLESTUDIO_API AutomaticTerminationMode GetAutomaticTerminationModeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForAutomaticTerminationMode(AutomaticTerminationMode value);
} // namespace AutomaticTerminationModeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
