/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class EnvironmentAccountConnectionStatus
  {
    NOT_SET,
    PENDING,
    CONNECTED,
    REJECTED
  };

namespace EnvironmentAccountConnectionStatusMapper
{
AWS_PROTON_API EnvironmentAccountConnectionStatus GetEnvironmentAccountConnectionStatusForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForEnvironmentAccountConnectionStatus(EnvironmentAccountConnectionStatus value);
} // namespace EnvironmentAccountConnectionStatusMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
