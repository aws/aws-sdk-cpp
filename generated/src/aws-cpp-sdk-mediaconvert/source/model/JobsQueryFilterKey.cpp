/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/JobsQueryFilterKey.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace JobsQueryFilterKeyMapper {

static const int queue_HASH = HashingUtils::HashString("queue");
static const int status_HASH = HashingUtils::HashString("status");
static const int fileInput_HASH = HashingUtils::HashString("fileInput");
static const int jobEngineVersionRequested_HASH = HashingUtils::HashString("jobEngineVersionRequested");
static const int jobEngineVersionUsed_HASH = HashingUtils::HashString("jobEngineVersionUsed");
static const int audioCodec_HASH = HashingUtils::HashString("audioCodec");
static const int videoCodec_HASH = HashingUtils::HashString("videoCodec");

JobsQueryFilterKey GetJobsQueryFilterKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == queue_HASH) {
    return JobsQueryFilterKey::queue;
  } else if (hashCode == status_HASH) {
    return JobsQueryFilterKey::status;
  } else if (hashCode == fileInput_HASH) {
    return JobsQueryFilterKey::fileInput;
  } else if (hashCode == jobEngineVersionRequested_HASH) {
    return JobsQueryFilterKey::jobEngineVersionRequested;
  } else if (hashCode == jobEngineVersionUsed_HASH) {
    return JobsQueryFilterKey::jobEngineVersionUsed;
  } else if (hashCode == audioCodec_HASH) {
    return JobsQueryFilterKey::audioCodec;
  } else if (hashCode == videoCodec_HASH) {
    return JobsQueryFilterKey::videoCodec;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobsQueryFilterKey>(hashCode);
  }

  return JobsQueryFilterKey::NOT_SET;
}

Aws::String GetNameForJobsQueryFilterKey(JobsQueryFilterKey enumValue) {
  switch (enumValue) {
    case JobsQueryFilterKey::NOT_SET:
      return {};
    case JobsQueryFilterKey::queue:
      return "queue";
    case JobsQueryFilterKey::status:
      return "status";
    case JobsQueryFilterKey::fileInput:
      return "fileInput";
    case JobsQueryFilterKey::jobEngineVersionRequested:
      return "jobEngineVersionRequested";
    case JobsQueryFilterKey::jobEngineVersionUsed:
      return "jobEngineVersionUsed";
    case JobsQueryFilterKey::audioCodec:
      return "audioCodec";
    case JobsQueryFilterKey::videoCodec:
      return "videoCodec";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobsQueryFilterKeyMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
