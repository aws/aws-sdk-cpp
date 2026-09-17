/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

namespace Aws {
namespace SocialMessaging {
namespace Model {
enum class WhatsAppDayOfWeek { NOT_SET, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

namespace WhatsAppDayOfWeekMapper {
AWS_SOCIALMESSAGING_API WhatsAppDayOfWeek GetWhatsAppDayOfWeekForName(const Aws::String& name);

AWS_SOCIALMESSAGING_API Aws::String GetNameForWhatsAppDayOfWeek(WhatsAppDayOfWeek value);
}  // namespace WhatsAppDayOfWeekMapper
}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
