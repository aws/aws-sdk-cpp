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
enum class SocialConnectionStatus { NOT_SET, AUTHORIZED, EXPIRED, PAGE_REQUIRED };

namespace SocialConnectionStatusMapper {
AWS_PARTNERCENTRALMARKETING_API SocialConnectionStatus GetSocialConnectionStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForSocialConnectionStatus(SocialConnectionStatus value);
}  // namespace SocialConnectionStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
