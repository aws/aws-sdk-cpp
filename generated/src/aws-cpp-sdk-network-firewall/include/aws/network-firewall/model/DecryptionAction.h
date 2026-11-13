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
enum class DecryptionAction { NOT_SET, DECRYPT, BYPASS };

namespace DecryptionActionMapper {
AWS_NETWORKFIREWALL_API DecryptionAction GetDecryptionActionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForDecryptionAction(DecryptionAction value);
}  // namespace DecryptionActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
