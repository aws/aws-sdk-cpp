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
  enum class Alignment
  {
    NOT_SET,
    LEFT,
    CENTER,
    RIGHT
  };

namespace AlignmentMapper
{
AWS_PINPOINT_API Alignment GetAlignmentForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForAlignment(Alignment value);
} // namespace AlignmentMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
