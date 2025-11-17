/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

namespace Aws {
namespace MWAAServerless {
namespace Model {
enum class EncryptionType { NOT_SET, AWS_MANAGED_KEY, CUSTOMER_MANAGED_KEY };

namespace EncryptionTypeMapper {
AWS_MWAASERVERLESS_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_MWAASERVERLESS_API Aws::String GetNameForEncryptionType(EncryptionType value);
}  // namespace EncryptionTypeMapper
}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
