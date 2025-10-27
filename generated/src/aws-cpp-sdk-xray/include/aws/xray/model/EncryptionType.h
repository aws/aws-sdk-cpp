/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/XRay_EXPORTS.h>

namespace Aws {
namespace XRay {
namespace Model {
enum class EncryptionType { NOT_SET, NONE, KMS };

namespace EncryptionTypeMapper {
AWS_XRAY_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForEncryptionType(EncryptionType value);
}  // namespace EncryptionTypeMapper
}  // namespace Model
}  // namespace XRay
}  // namespace Aws
