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
  enum class SessionExecutionStatus
  {
    NOT_SET,
    EXECUTED,
    FAILED,
    PENDING
  };

namespace SessionExecutionStatusMapper
{
AWS_MPA_API SessionExecutionStatus GetSessionExecutionStatusForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForSessionExecutionStatus(SessionExecutionStatus value);
} // namespace SessionExecutionStatusMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
