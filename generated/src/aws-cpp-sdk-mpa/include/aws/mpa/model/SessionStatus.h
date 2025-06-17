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
  enum class SessionStatus
  {
    NOT_SET,
    PENDING,
    CANCELLED,
    APPROVED,
    FAILED,
    CREATING
  };

namespace SessionStatusMapper
{
AWS_MPA_API SessionStatus GetSessionStatusForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForSessionStatus(SessionStatus value);
} // namespace SessionStatusMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
