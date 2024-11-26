/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QApps
{
namespace Model
{
  enum class InputCardComputeMode
  {
    NOT_SET,
    append,
    replace
  };

namespace InputCardComputeModeMapper
{
AWS_QAPPS_API InputCardComputeMode GetInputCardComputeModeForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForInputCardComputeMode(InputCardComputeMode value);
} // namespace InputCardComputeModeMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
