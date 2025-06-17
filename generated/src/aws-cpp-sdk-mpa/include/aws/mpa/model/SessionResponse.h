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
  enum class SessionResponse
  {
    NOT_SET,
    APPROVED,
    REJECTED,
    NO_RESPONSE
  };

namespace SessionResponseMapper
{
AWS_MPA_API SessionResponse GetSessionResponseForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForSessionResponse(SessionResponse value);
} // namespace SessionResponseMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
