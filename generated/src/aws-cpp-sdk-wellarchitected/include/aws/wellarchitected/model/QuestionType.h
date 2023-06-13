/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class QuestionType
  {
    NOT_SET,
    PRIORITIZED,
    NON_PRIORITIZED
  };

namespace QuestionTypeMapper
{
AWS_WELLARCHITECTED_API QuestionType GetQuestionTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForQuestionType(QuestionType value);
} // namespace QuestionTypeMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
