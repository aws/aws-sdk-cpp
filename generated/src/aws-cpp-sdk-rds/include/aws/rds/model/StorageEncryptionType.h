/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Model {
enum class StorageEncryptionType { NOT_SET, none, sse_kms, sse_rds };

namespace StorageEncryptionTypeMapper {
AWS_RDS_API StorageEncryptionType GetStorageEncryptionTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForStorageEncryptionType(StorageEncryptionType value);
}  // namespace StorageEncryptionTypeMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
