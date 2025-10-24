/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class RuleType { NOT_SET, CONTENT_BLOCKER_RULE, CONTENT_RETRIEVAL_RULE };

namespace RuleTypeMapper {
AWS_QBUSINESS_API RuleType GetRuleTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForRuleType(RuleType value);
}  // namespace RuleTypeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
