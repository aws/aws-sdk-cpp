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
enum class Theme {
  NOT_SET,
  AI,
  MIGRATION_MODERNIZATION,
  SECURITY,
  DATA_ANALYTICS,
  AWS_TRAINING_CERTIFICATION,
  AWS_MARKETPLACE,
  CONNECT,
  EVENTS
};

namespace ThemeMapper {
AWS_PARTNERCENTRALMARKETING_API Theme GetThemeForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForTheme(Theme value);
}  // namespace ThemeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
