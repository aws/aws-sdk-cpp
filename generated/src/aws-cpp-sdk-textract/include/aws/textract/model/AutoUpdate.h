/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Textract
{
namespace Model
{
  enum class AutoUpdate
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AutoUpdateMapper
{
AWS_TEXTRACT_API AutoUpdate GetAutoUpdateForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForAutoUpdate(AutoUpdate value);
} // namespace AutoUpdateMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
