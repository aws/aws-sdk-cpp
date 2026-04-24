/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class WhatsAppSourceConfigurationStatus { NOT_SET, VALID, INVALID, REJECTED };

namespace WhatsAppSourceConfigurationStatusMapper {
AWS_QCONNECT_API WhatsAppSourceConfigurationStatus GetWhatsAppSourceConfigurationStatusForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForWhatsAppSourceConfigurationStatus(WhatsAppSourceConfigurationStatus value);
}  // namespace WhatsAppSourceConfigurationStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
