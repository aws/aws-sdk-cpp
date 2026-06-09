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
enum class AutonomousDatabaseWalletStatus { NOT_SET, ACTIVE, UPDATING };

namespace AutonomousDatabaseWalletStatusMapper {
AWS_ODB_API AutonomousDatabaseWalletStatus GetAutonomousDatabaseWalletStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForAutonomousDatabaseWalletStatus(AutonomousDatabaseWalletStatus value);
}  // namespace AutonomousDatabaseWalletStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
