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
  enum class SessionPersistenceMode
  {
    NOT_SET,
    DEACTIVATED,
    ACTIVATED
  };

namespace SessionPersistenceModeMapper
{
AWS_NIMBLESTUDIO_API SessionPersistenceMode GetSessionPersistenceModeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForSessionPersistenceMode(SessionPersistenceMode value);
} // namespace SessionPersistenceModeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
