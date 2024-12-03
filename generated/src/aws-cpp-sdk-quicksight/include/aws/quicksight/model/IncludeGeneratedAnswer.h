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
  enum class IncludeGeneratedAnswer
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace IncludeGeneratedAnswerMapper
{
AWS_QUICKSIGHT_API IncludeGeneratedAnswer GetIncludeGeneratedAnswerForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIncludeGeneratedAnswer(IncludeGeneratedAnswer value);
} // namespace IncludeGeneratedAnswerMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
