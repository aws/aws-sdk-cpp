/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class Question { NOT_SET, UNANSWERED, ANSWERED };

namespace QuestionMapper {
AWS_WELLARCHITECTED_API Question GetQuestionForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForQuestion(Question value);
}  // namespace QuestionMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
