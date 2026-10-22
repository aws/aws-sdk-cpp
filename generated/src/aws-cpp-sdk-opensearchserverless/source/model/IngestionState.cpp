/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/IngestionState.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace IngestionStateMapper {

static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int SCANNING_HASH = HashingUtils::HashString("SCANNING");
static const int INGESTION_IN_PROGRESS_HASH = HashingUtils::HashString("INGESTION_IN_PROGRESS");
static const int INGESTION_COMPLETE_HASH = HashingUtils::HashString("INGESTION_COMPLETE");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

IngestionState GetIngestionStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTING_HASH) {
    return IngestionState::STARTING;
  } else if (hashCode == SCANNING_HASH) {
    return IngestionState::SCANNING;
  } else if (hashCode == INGESTION_IN_PROGRESS_HASH) {
    return IngestionState::INGESTION_IN_PROGRESS;
  } else if (hashCode == INGESTION_COMPLETE_HASH) {
    return IngestionState::INGESTION_COMPLETE;
  } else if (hashCode == STOPPED_HASH) {
    return IngestionState::STOPPED;
  } else if (hashCode == FAILED_HASH) {
    return IngestionState::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IngestionState>(hashCode);
  }

  return IngestionState::NOT_SET;
}

Aws::String GetNameForIngestionState(IngestionState enumValue) {
  switch (enumValue) {
    case IngestionState::NOT_SET:
      return {};
    case IngestionState::STARTING:
      return "STARTING";
    case IngestionState::SCANNING:
      return "SCANNING";
    case IngestionState::INGESTION_IN_PROGRESS:
      return "INGESTION_IN_PROGRESS";
    case IngestionState::INGESTION_COMPLETE:
      return "INGESTION_COMPLETE";
    case IngestionState::STOPPED:
      return "STOPPED";
    case IngestionState::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IngestionStateMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
