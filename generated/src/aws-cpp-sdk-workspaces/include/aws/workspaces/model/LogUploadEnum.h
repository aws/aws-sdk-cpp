/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class LogUploadEnum
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace LogUploadEnumMapper
{
AWS_WORKSPACES_API LogUploadEnum GetLogUploadEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForLogUploadEnum(LogUploadEnum value);
} // namespace LogUploadEnumMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
