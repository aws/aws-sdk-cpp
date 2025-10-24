/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb/QLDB_EXPORTS.h>

namespace Aws {
namespace QLDB {
namespace Model {
enum class EncryptionStatus { NOT_SET, ENABLED, UPDATING, KMS_KEY_INACCESSIBLE };

namespace EncryptionStatusMapper {
AWS_QLDB_API EncryptionStatus GetEncryptionStatusForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForEncryptionStatus(EncryptionStatus value);
}  // namespace EncryptionStatusMapper
}  // namespace Model
}  // namespace QLDB
}  // namespace Aws
