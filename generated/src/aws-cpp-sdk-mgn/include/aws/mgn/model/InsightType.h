/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class InsightType { NOT_SET, INTENT_GAP, WARNING, QUESTION, INFO, ERROR_, CONTEXT, EXCLUDED, BEHAVIOR_CHANGE };

namespace InsightTypeMapper {
AWS_MGN_API InsightType GetInsightTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForInsightType(InsightType value);
}  // namespace InsightTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
