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
enum class ExascaleDbStorageVaultType { NOT_SET, EXASCALE_INFRASTRUCTURE, DEDICATED_INFRASTRUCTURE };

namespace ExascaleDbStorageVaultTypeMapper {
AWS_ODB_API ExascaleDbStorageVaultType GetExascaleDbStorageVaultTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForExascaleDbStorageVaultType(ExascaleDbStorageVaultType value);
}  // namespace ExascaleDbStorageVaultTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
