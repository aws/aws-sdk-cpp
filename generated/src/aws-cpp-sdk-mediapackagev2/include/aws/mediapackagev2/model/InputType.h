/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class InputType
  {
    NOT_SET,
    HLS,
    CMAF
  };

namespace InputTypeMapper
{
AWS_MEDIAPACKAGEV2_API InputType GetInputTypeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForInputType(InputType value);
} // namespace InputTypeMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
