/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class SendMode { NOT_SET, ON_ACTIVATION, SCHEDULED };

namespace SendModeMapper {
AWS_PARTNERCENTRALMARKETING_API SendMode GetSendModeForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForSendMode(SendMode value);
}  // namespace SendModeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
