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
  enum class TextWrap
  {
    NOT_SET,
    NONE,
    WRAP
  };

namespace TextWrapMapper
{
AWS_QUICKSIGHT_API TextWrap GetTextWrapForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTextWrap(TextWrap value);
} // namespace TextWrapMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
