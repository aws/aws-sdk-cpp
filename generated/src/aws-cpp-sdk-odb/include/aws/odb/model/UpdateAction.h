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
enum class UpdateAction { NOT_SET, ROLLING_APPLY, NON_ROLLING_APPLY, PRECHECK, ROLLBACK };

namespace UpdateActionMapper {
AWS_ODB_API UpdateAction GetUpdateActionForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForUpdateAction(UpdateAction value);
}  // namespace UpdateActionMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
