/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QLDB
{
namespace Model
{
  enum class EncryptionStatus
  {
    NOT_SET,
    ENABLED,
    UPDATING,
    KMS_KEY_INACCESSIBLE
  };

namespace EncryptionStatusMapper
{
AWS_QLDB_API EncryptionStatus GetEncryptionStatusForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForEncryptionStatus(EncryptionStatus value);
} // namespace EncryptionStatusMapper
} // namespace Model
} // namespace QLDB
} // namespace Aws
