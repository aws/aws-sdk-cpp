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
enum class EncryptionStatus { NOT_SET, UPDATING, ACTIVE };

namespace EncryptionStatusMapper {
AWS_XRAY_API EncryptionStatus GetEncryptionStatusForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForEncryptionStatus(EncryptionStatus value);
}  // namespace EncryptionStatusMapper
}  // namespace Model
}  // namespace XRay
}  // namespace Aws
