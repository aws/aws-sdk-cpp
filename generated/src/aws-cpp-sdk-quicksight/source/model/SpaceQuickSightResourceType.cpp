/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/SpaceQuickSightResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace SpaceQuickSightResourceTypeMapper {

static const int TOPIC_HASH = HashingUtils::HashString("TOPIC");
static const int DASHBOARD_HASH = HashingUtils::HashString("DASHBOARD");
static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");
static const int SPACE_HASH = HashingUtils::HashString("SPACE");
static const int ACTION_CONNECTOR_HASH = HashingUtils::HashString("ACTION_CONNECTOR");
static const int DATA_SET_HASH = HashingUtils::HashString("DATA_SET");
static const int ARTIFACT_HASH = HashingUtils::HashString("ARTIFACT");

SpaceQuickSightResourceType GetSpaceQuickSightResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOPIC_HASH) {
    return SpaceQuickSightResourceType::TOPIC;
  } else if (hashCode == DASHBOARD_HASH) {
    return SpaceQuickSightResourceType::DASHBOARD;
  } else if (hashCode == KNOWLEDGE_BASE_HASH) {
    return SpaceQuickSightResourceType::KNOWLEDGE_BASE;
  } else if (hashCode == SPACE_HASH) {
    return SpaceQuickSightResourceType::SPACE;
  } else if (hashCode == ACTION_CONNECTOR_HASH) {
    return SpaceQuickSightResourceType::ACTION_CONNECTOR;
  } else if (hashCode == DATA_SET_HASH) {
    return SpaceQuickSightResourceType::DATA_SET;
  } else if (hashCode == ARTIFACT_HASH) {
    return SpaceQuickSightResourceType::ARTIFACT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpaceQuickSightResourceType>(hashCode);
  }

  return SpaceQuickSightResourceType::NOT_SET;
}

Aws::String GetNameForSpaceQuickSightResourceType(SpaceQuickSightResourceType enumValue) {
  switch (enumValue) {
    case SpaceQuickSightResourceType::NOT_SET:
      return {};
    case SpaceQuickSightResourceType::TOPIC:
      return "TOPIC";
    case SpaceQuickSightResourceType::DASHBOARD:
      return "DASHBOARD";
    case SpaceQuickSightResourceType::KNOWLEDGE_BASE:
      return "KNOWLEDGE_BASE";
    case SpaceQuickSightResourceType::SPACE:
      return "SPACE";
    case SpaceQuickSightResourceType::ACTION_CONNECTOR:
      return "ACTION_CONNECTOR";
    case SpaceQuickSightResourceType::DATA_SET:
      return "DATA_SET";
    case SpaceQuickSightResourceType::ARTIFACT:
      return "ARTIFACT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpaceQuickSightResourceTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
