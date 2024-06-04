/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class TimeFieldType
  {
    NOT_SET,
    EPOCH,
    TIMESTAMP_FORMAT
  };

namespace TimeFieldTypeMapper
{
AWS_PIPES_API TimeFieldType GetTimeFieldTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForTimeFieldType(TimeFieldType value);
} // namespace TimeFieldTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
