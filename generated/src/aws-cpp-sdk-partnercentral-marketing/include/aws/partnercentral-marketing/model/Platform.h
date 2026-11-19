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
enum class Platform { NOT_SET, FACEBOOK, LINKEDIN, X };

namespace PlatformMapper {
AWS_PARTNERCENTRALMARKETING_API Platform GetPlatformForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForPlatform(Platform value);
}  // namespace PlatformMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
