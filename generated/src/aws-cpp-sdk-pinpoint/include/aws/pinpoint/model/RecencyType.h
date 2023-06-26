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
  enum class RecencyType
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace RecencyTypeMapper
{
AWS_PINPOINT_API RecencyType GetRecencyTypeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForRecencyType(RecencyType value);
} // namespace RecencyTypeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
