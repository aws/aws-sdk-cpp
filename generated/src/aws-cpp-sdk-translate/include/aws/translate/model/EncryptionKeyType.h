/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/Translate_EXPORTS.h>

namespace Aws {
namespace Translate {
namespace Model {
enum class EncryptionKeyType { NOT_SET, KMS };

namespace EncryptionKeyTypeMapper {
AWS_TRANSLATE_API EncryptionKeyType GetEncryptionKeyTypeForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForEncryptionKeyType(EncryptionKeyType value);
}  // namespace EncryptionKeyTypeMapper
}  // namespace Model
}  // namespace Translate
}  // namespace Aws
