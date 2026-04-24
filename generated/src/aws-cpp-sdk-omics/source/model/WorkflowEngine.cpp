/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/omics/model/WorkflowEngine.h>

using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {
namespace WorkflowEngineMapper {

static const int WDL_HASH = HashingUtils::HashString("WDL");
static const int NEXTFLOW_HASH = HashingUtils::HashString("NEXTFLOW");
static const int CWL_HASH = HashingUtils::HashString("CWL");
static const int WDL_LENIENT_HASH = HashingUtils::HashString("WDL_LENIENT");

WorkflowEngine GetWorkflowEngineForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WDL_HASH) {
    return WorkflowEngine::WDL;
  } else if (hashCode == NEXTFLOW_HASH) {
    return WorkflowEngine::NEXTFLOW;
  } else if (hashCode == CWL_HASH) {
    return WorkflowEngine::CWL;
  } else if (hashCode == WDL_LENIENT_HASH) {
    return WorkflowEngine::WDL_LENIENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WorkflowEngine>(hashCode);
  }

  return WorkflowEngine::NOT_SET;
}

Aws::String GetNameForWorkflowEngine(WorkflowEngine enumValue) {
  switch (enumValue) {
    case WorkflowEngine::NOT_SET:
      return {};
    case WorkflowEngine::WDL:
      return "WDL";
    case WorkflowEngine::NEXTFLOW:
      return "NEXTFLOW";
    case WorkflowEngine::CWL:
      return "CWL";
    case WorkflowEngine::WDL_LENIENT:
      return "WDL_LENIENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WorkflowEngineMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
