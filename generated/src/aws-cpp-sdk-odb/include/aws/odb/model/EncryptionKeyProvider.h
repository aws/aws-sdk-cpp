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
enum class EncryptionKeyProvider { NOT_SET, ORACLE_MANAGED, AWS_KMS, OKV, OCI };

namespace EncryptionKeyProviderMapper {
AWS_ODB_API EncryptionKeyProvider GetEncryptionKeyProviderForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForEncryptionKeyProvider(EncryptionKeyProvider value);
}  // namespace EncryptionKeyProviderMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
