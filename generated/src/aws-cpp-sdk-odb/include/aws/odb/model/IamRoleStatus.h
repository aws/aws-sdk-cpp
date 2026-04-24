/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class IamRoleStatus { NOT_SET, ASSOCIATING, DISASSOCIATING, FAILED, CONNECTED, DISCONNECTED, PARTIALLY_CONNECTED, UNKNOWN };

namespace IamRoleStatusMapper {
AWS_ODB_API IamRoleStatus GetIamRoleStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForIamRoleStatus(IamRoleStatus value);
}  // namespace IamRoleStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
