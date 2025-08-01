/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{
  enum class LogFileFormat
  {
    NOT_SET,
    JSONLines,
    Json
  };

namespace LogFileFormatMapper
{
AWS_WORKSPACESWEB_API LogFileFormat GetLogFileFormatForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForLogFileFormat(LogFileFormat value);
} // namespace LogFileFormatMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
