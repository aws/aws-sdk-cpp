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
enum class AttachmentStatus { NOT_SET, CREATING, DELETING, FAILED, ERROR_, SCALING, READY };

namespace AttachmentStatusMapper {
AWS_NETWORKFIREWALL_API AttachmentStatus GetAttachmentStatusForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForAttachmentStatus(AttachmentStatus value);
}  // namespace AttachmentStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
