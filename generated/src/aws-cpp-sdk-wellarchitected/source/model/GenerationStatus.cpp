/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wellarchitected/model/GenerationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {
namespace GenerationStatusMapper {

static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

GenerationStatus GetGenerationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUEUED_HASH) {
    return GenerationStatus::QUEUED;
  } else if (hashCode == IN_PROGRESS_HASH) {
    return GenerationStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETED_HASH) {
    return GenerationStatus::COMPLETED;
  } else if (hashCode == ERROR__HASH) {
    return GenerationStatus::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GenerationStatus>(hashCode);
  }

  return GenerationStatus::NOT_SET;
}

Aws::String GetNameForGenerationStatus(GenerationStatus enumValue) {
  switch (enumValue) {
    case GenerationStatus::NOT_SET:
      return {};
    case GenerationStatus::QUEUED:
      return "QUEUED";
    case GenerationStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case GenerationStatus::COMPLETED:
      return "COMPLETED";
    case GenerationStatus::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GenerationStatusMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
