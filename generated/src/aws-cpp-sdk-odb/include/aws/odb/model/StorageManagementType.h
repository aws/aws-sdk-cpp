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
enum class StorageManagementType { NOT_SET, ASM, EXASCALE };

namespace StorageManagementTypeMapper {
AWS_ODB_API StorageManagementType GetStorageManagementTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForStorageManagementType(StorageManagementType value);
}  // namespace StorageManagementTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
