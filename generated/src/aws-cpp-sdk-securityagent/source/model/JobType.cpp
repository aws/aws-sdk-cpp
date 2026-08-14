/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/JobType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace JobTypeMapper {

static const int FULL_HASH = HashingUtils::HashString("FULL");
static const int REVALIDATION_HASH = HashingUtils::HashString("REVALIDATION");

JobType GetJobTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULL_HASH) {
    return JobType::FULL;
  } else if (hashCode == REVALIDATION_HASH) {
    return JobType::REVALIDATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JobType>(hashCode);
  }

  return JobType::NOT_SET;
}

Aws::String GetNameForJobType(JobType enumValue) {
  switch (enumValue) {
    case JobType::NOT_SET:
      return {};
    case JobType::FULL:
      return "FULL";
    case JobType::REVALIDATION:
      return "REVALIDATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JobTypeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
