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
enum class DisasterRecoveryType { NOT_SET, ADG, BACKUP_BASED };

namespace DisasterRecoveryTypeMapper {
AWS_ODB_API DisasterRecoveryType GetDisasterRecoveryTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDisasterRecoveryType(DisasterRecoveryType value);
}  // namespace DisasterRecoveryTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
