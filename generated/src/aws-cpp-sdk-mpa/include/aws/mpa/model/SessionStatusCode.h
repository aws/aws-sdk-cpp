/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MPA
{
namespace Model
{
  enum class SessionStatusCode
  {
    NOT_SET,
    REJECTED,
    EXPIRED,
    CONFIGURATION_CHANGED
  };

namespace SessionStatusCodeMapper
{
AWS_MPA_API SessionStatusCode GetSessionStatusCodeForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForSessionStatusCode(SessionStatusCode value);
} // namespace SessionStatusCodeMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
