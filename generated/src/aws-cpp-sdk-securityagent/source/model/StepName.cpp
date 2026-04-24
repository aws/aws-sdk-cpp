/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/StepName.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace StepNameMapper {

static const int PREFLIGHT_HASH = HashingUtils::HashString("PREFLIGHT");
static const int STATIC_ANALYSIS_HASH = HashingUtils::HashString("STATIC_ANALYSIS");
static const int PENTEST_HASH = HashingUtils::HashString("PENTEST");
static const int FINALIZING_HASH = HashingUtils::HashString("FINALIZING");

StepName GetStepNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PREFLIGHT_HASH) {
    return StepName::PREFLIGHT;
  } else if (hashCode == STATIC_ANALYSIS_HASH) {
    return StepName::STATIC_ANALYSIS;
  } else if (hashCode == PENTEST_HASH) {
    return StepName::PENTEST;
  } else if (hashCode == FINALIZING_HASH) {
    return StepName::FINALIZING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StepName>(hashCode);
  }

  return StepName::NOT_SET;
}

Aws::String GetNameForStepName(StepName enumValue) {
  switch (enumValue) {
    case StepName::NOT_SET:
      return {};
    case StepName::PREFLIGHT:
      return "PREFLIGHT";
    case StepName::STATIC_ANALYSIS:
      return "STATIC_ANALYSIS";
    case StepName::PENTEST:
      return "PENTEST";
    case StepName::FINALIZING:
      return "FINALIZING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StepNameMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
