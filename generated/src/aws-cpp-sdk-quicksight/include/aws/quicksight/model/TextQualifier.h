/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class TextQualifier
  {
    NOT_SET,
    DOUBLE_QUOTE,
    SINGLE_QUOTE
  };

namespace TextQualifierMapper
{
AWS_QUICKSIGHT_API TextQualifier GetTextQualifierForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTextQualifier(TextQualifier value);
} // namespace TextQualifierMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
