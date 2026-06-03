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
enum class MetaFlowCategory {
  NOT_SET,
  SIGN_UP,
  SIGN_IN,
  APPOINTMENT_BOOKING,
  LEAD_GENERATION,
  SHOPPING,
  CONTACT_US,
  CUSTOMER_SUPPORT,
  SURVEY,
  OTHER
};

namespace MetaFlowCategoryMapper {
AWS_SOCIALMESSAGING_API MetaFlowCategory GetMetaFlowCategoryForName(const Aws::String& name);

AWS_SOCIALMESSAGING_API Aws::String GetNameForMetaFlowCategory(MetaFlowCategory value);
}  // namespace MetaFlowCategoryMapper
}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
