﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/monitoring/model/HistoryItemType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {
namespace HistoryItemTypeMapper {

static const int ConfigurationUpdate_HASH = HashingUtils::HashString("ConfigurationUpdate");
static const int StateUpdate_HASH = HashingUtils::HashString("StateUpdate");
static const int Action_HASH = HashingUtils::HashString("Action");
static const int AlarmContributorStateUpdate_HASH = HashingUtils::HashString("AlarmContributorStateUpdate");
static const int AlarmContributorAction_HASH = HashingUtils::HashString("AlarmContributorAction");

HistoryItemType GetHistoryItemTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ConfigurationUpdate_HASH) {
    return HistoryItemType::ConfigurationUpdate;
  } else if (hashCode == StateUpdate_HASH) {
    return HistoryItemType::StateUpdate;
  } else if (hashCode == Action_HASH) {
    return HistoryItemType::Action;
  } else if (hashCode == AlarmContributorStateUpdate_HASH) {
    return HistoryItemType::AlarmContributorStateUpdate;
  } else if (hashCode == AlarmContributorAction_HASH) {
    return HistoryItemType::AlarmContributorAction;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HistoryItemType>(hashCode);
  }

  return HistoryItemType::NOT_SET;
}

Aws::String GetNameForHistoryItemType(HistoryItemType enumValue) {
  switch (enumValue) {
    case HistoryItemType::NOT_SET:
      return {};
    case HistoryItemType::ConfigurationUpdate:
      return "ConfigurationUpdate";
    case HistoryItemType::StateUpdate:
      return "StateUpdate";
    case HistoryItemType::Action:
      return "Action";
    case HistoryItemType::AlarmContributorStateUpdate:
      return "AlarmContributorStateUpdate";
    case HistoryItemType::AlarmContributorAction:
      return "AlarmContributorAction";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HistoryItemTypeMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
