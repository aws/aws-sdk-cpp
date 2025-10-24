﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/omics/model/WorkflowExport.h>

using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {
namespace WorkflowExportMapper {

static const int DEFINITION_HASH = HashingUtils::HashString("DEFINITION");
static const int README_HASH = HashingUtils::HashString("README");

WorkflowExport GetWorkflowExportForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEFINITION_HASH) {
    return WorkflowExport::DEFINITION;
  } else if (hashCode == README_HASH) {
    return WorkflowExport::README;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WorkflowExport>(hashCode);
  }

  return WorkflowExport::NOT_SET;
}

Aws::String GetNameForWorkflowExport(WorkflowExport enumValue) {
  switch (enumValue) {
    case WorkflowExport::NOT_SET:
      return {};
    case WorkflowExport::DEFINITION:
      return "DEFINITION";
    case WorkflowExport::README:
      return "README";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WorkflowExportMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
