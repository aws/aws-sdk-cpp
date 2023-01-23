/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class Format
  {
    NOT_SET,
    CSV,
    JSON
  };

namespace FormatMapper
{
AWS_PINPOINT_API Format GetFormatForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
