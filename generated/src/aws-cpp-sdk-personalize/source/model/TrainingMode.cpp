﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/personalize/model/TrainingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Personalize {
namespace Model {
namespace TrainingModeMapper {

static const int FULL_HASH = HashingUtils::HashString("FULL");
static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
static const int AUTOTRAIN_HASH = HashingUtils::HashString("AUTOTRAIN");

TrainingMode GetTrainingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULL_HASH) {
    return TrainingMode::FULL;
  } else if (hashCode == UPDATE_HASH) {
    return TrainingMode::UPDATE;
  } else if (hashCode == AUTOTRAIN_HASH) {
    return TrainingMode::AUTOTRAIN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrainingMode>(hashCode);
  }

  return TrainingMode::NOT_SET;
}

Aws::String GetNameForTrainingMode(TrainingMode enumValue) {
  switch (enumValue) {
    case TrainingMode::NOT_SET:
      return {};
    case TrainingMode::FULL:
      return "FULL";
    case TrainingMode::UPDATE:
      return "UPDATE";
    case TrainingMode::AUTOTRAIN:
      return "AUTOTRAIN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrainingModeMapper
}  // namespace Model
}  // namespace Personalize
}  // namespace Aws
