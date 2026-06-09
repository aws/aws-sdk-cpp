/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class RuleStatus { NOT_SET, CREATION_IN_PROGRESS, ACTIVE, UPDATE_IN_PROGRESS, DELETION_IN_PROGRESS, DELETED, FAILED };

namespace RuleStatusMapper {
AWS_RTBFABRIC_API RuleStatus GetRuleStatusForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForRuleStatus(RuleStatus value);
}  // namespace RuleStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
