/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class SettingsStatus
  {
    NOT_SET,
    INITIALIZED,
    PENDING,
    COMPLETED,
    FAILED
  };

namespace SettingsStatusMapper
{
AWS_SECURITYLAKE_API SettingsStatus GetSettingsStatusForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForSettingsStatus(SettingsStatus value);
} // namespace SettingsStatusMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
