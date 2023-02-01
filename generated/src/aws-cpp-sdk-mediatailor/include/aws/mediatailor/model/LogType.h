/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class LogType
  {
    NOT_SET,
    AS_RUN
  };

namespace LogTypeMapper
{
AWS_MEDIATAILOR_API LogType GetLogTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForLogType(LogType value);
} // namespace LogTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
