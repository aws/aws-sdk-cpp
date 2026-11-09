/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/CutoverTarget.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace CutoverTargetMapper {

static const int ClonedCluster_HASH = HashingUtils::HashString("ClonedCluster");
static const int PrimaryCluster_HASH = HashingUtils::HashString("PrimaryCluster");

CutoverTarget GetCutoverTargetForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ClonedCluster_HASH) {
    return CutoverTarget::ClonedCluster;
  } else if (hashCode == PrimaryCluster_HASH) {
    return CutoverTarget::PrimaryCluster;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CutoverTarget>(hashCode);
  }

  return CutoverTarget::NOT_SET;
}

Aws::String GetNameForCutoverTarget(CutoverTarget enumValue) {
  switch (enumValue) {
    case CutoverTarget::NOT_SET:
      return {};
    case CutoverTarget::ClonedCluster:
      return "ClonedCluster";
    case CutoverTarget::PrimaryCluster:
      return "PrimaryCluster";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CutoverTargetMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
