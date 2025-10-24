/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>

namespace Aws {
namespace Organizations {
namespace Model {
enum class ActionType { NOT_SET, INVITE, ENABLE_ALL_FEATURES, APPROVE_ALL_FEATURES, ADD_ORGANIZATIONS_SERVICE_LINKED_ROLE };

namespace ActionTypeMapper {
AWS_ORGANIZATIONS_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForActionType(ActionType value);
}  // namespace ActionTypeMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
