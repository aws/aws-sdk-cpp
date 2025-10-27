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
enum class QuestionPriority { NOT_SET, PRIORITIZED, NONE };

namespace QuestionPriorityMapper {
AWS_WELLARCHITECTED_API QuestionPriority GetQuestionPriorityForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForQuestionPriority(QuestionPriority value);
}  // namespace QuestionPriorityMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
