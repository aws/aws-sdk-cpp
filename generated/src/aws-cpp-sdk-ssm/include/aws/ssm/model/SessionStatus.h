/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class SessionStatus
  {
    NOT_SET,
    Connected,
    Connecting,
    Disconnected,
    Terminated,
    Terminating,
    Failed
  };

namespace SessionStatusMapper
{
AWS_SSM_API SessionStatus GetSessionStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForSessionStatus(SessionStatus value);
} // namespace SessionStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
