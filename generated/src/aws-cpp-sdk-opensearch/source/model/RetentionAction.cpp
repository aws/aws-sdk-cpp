/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/RetentionAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace RetentionActionMapper {

static const int RollbackToPrimaryCluster_HASH = HashingUtils::HashString("RollbackToPrimaryCluster");
static const int DeletePrimaryCluster_HASH = HashingUtils::HashString("DeletePrimaryCluster");

RetentionAction GetRetentionActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RollbackToPrimaryCluster_HASH) {
    return RetentionAction::RollbackToPrimaryCluster;
  } else if (hashCode == DeletePrimaryCluster_HASH) {
    return RetentionAction::DeletePrimaryCluster;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RetentionAction>(hashCode);
  }

  return RetentionAction::NOT_SET;
}

Aws::String GetNameForRetentionAction(RetentionAction enumValue) {
  switch (enumValue) {
    case RetentionAction::NOT_SET:
      return {};
    case RetentionAction::RollbackToPrimaryCluster:
      return "RollbackToPrimaryCluster";
    case RetentionAction::DeletePrimaryCluster:
      return "DeletePrimaryCluster";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RetentionActionMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
