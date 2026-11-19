/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/Theme.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace ThemeMapper {

static const int AI_HASH = HashingUtils::HashString("AI");
static const int MIGRATION_MODERNIZATION_HASH = HashingUtils::HashString("MIGRATION_MODERNIZATION");
static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
static const int DATA_ANALYTICS_HASH = HashingUtils::HashString("DATA_ANALYTICS");
static const int AWS_TRAINING_CERTIFICATION_HASH = HashingUtils::HashString("AWS_TRAINING_CERTIFICATION");
static const int AWS_MARKETPLACE_HASH = HashingUtils::HashString("AWS_MARKETPLACE");
static const int CONNECT_HASH = HashingUtils::HashString("CONNECT");
static const int EVENTS_HASH = HashingUtils::HashString("EVENTS");

Theme GetThemeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AI_HASH) {
    return Theme::AI;
  } else if (hashCode == MIGRATION_MODERNIZATION_HASH) {
    return Theme::MIGRATION_MODERNIZATION;
  } else if (hashCode == SECURITY_HASH) {
    return Theme::SECURITY;
  } else if (hashCode == DATA_ANALYTICS_HASH) {
    return Theme::DATA_ANALYTICS;
  } else if (hashCode == AWS_TRAINING_CERTIFICATION_HASH) {
    return Theme::AWS_TRAINING_CERTIFICATION;
  } else if (hashCode == AWS_MARKETPLACE_HASH) {
    return Theme::AWS_MARKETPLACE;
  } else if (hashCode == CONNECT_HASH) {
    return Theme::CONNECT;
  } else if (hashCode == EVENTS_HASH) {
    return Theme::EVENTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Theme>(hashCode);
  }

  return Theme::NOT_SET;
}

Aws::String GetNameForTheme(Theme enumValue) {
  switch (enumValue) {
    case Theme::NOT_SET:
      return {};
    case Theme::AI:
      return "AI";
    case Theme::MIGRATION_MODERNIZATION:
      return "MIGRATION_MODERNIZATION";
    case Theme::SECURITY:
      return "SECURITY";
    case Theme::DATA_ANALYTICS:
      return "DATA_ANALYTICS";
    case Theme::AWS_TRAINING_CERTIFICATION:
      return "AWS_TRAINING_CERTIFICATION";
    case Theme::AWS_MARKETPLACE:
      return "AWS_MARKETPLACE";
    case Theme::CONNECT:
      return "CONNECT";
    case Theme::EVENTS:
      return "EVENTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ThemeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
