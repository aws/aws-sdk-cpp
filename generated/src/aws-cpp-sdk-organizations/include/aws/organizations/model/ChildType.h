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
enum class ChildType { NOT_SET, ACCOUNT, ORGANIZATIONAL_UNIT };

namespace ChildTypeMapper {
AWS_ORGANIZATIONS_API ChildType GetChildTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForChildType(ChildType value);
}  // namespace ChildTypeMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
