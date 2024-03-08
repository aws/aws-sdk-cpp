/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class InspectionLevel
  {
    NOT_SET,
    INFO,
    DEBUG_,
    TRACE
  };

namespace InspectionLevelMapper
{
AWS_SFN_API InspectionLevel GetInspectionLevelForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForInspectionLevel(InspectionLevel value);
} // namespace InspectionLevelMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
