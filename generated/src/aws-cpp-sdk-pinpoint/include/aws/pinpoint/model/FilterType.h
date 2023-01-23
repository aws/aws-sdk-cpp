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
  enum class FilterType
  {
    NOT_SET,
    SYSTEM,
    ENDPOINT
  };

namespace FilterTypeMapper
{
AWS_PINPOINT_API FilterType GetFilterTypeForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForFilterType(FilterType value);
} // namespace FilterTypeMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
