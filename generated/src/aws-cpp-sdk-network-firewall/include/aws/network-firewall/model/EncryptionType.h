/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Model {
enum class EncryptionType { NOT_SET, CUSTOMER_KMS, AWS_OWNED_KMS_KEY };

namespace EncryptionTypeMapper {
AWS_NETWORKFIREWALL_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForEncryptionType(EncryptionType value);
}  // namespace EncryptionTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
