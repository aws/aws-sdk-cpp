/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class SensitivityToAct
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH
  };

namespace SensitivityToActMapper
{
AWS_WAFV2_API SensitivityToAct GetSensitivityToActForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForSensitivityToAct(SensitivityToAct value);
} // namespace SensitivityToActMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
