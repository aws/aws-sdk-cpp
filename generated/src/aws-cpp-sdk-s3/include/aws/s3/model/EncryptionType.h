/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3_EXPORTS.h>

namespace Aws {
namespace S3 {
namespace Model {
enum class EncryptionType { NOT_SET, NONE, SSE_C };

namespace EncryptionTypeMapper {
AWS_S3_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_S3_API Aws::String GetNameForEncryptionType(EncryptionType value);
}  // namespace EncryptionTypeMapper
}  // namespace Model
}  // namespace S3
}  // namespace Aws
