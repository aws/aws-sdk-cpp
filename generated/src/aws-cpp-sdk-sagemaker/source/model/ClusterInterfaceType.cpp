/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterInterfaceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterInterfaceTypeMapper {

static const int efa_HASH = HashingUtils::HashString("efa");
static const int efa_only_HASH = HashingUtils::HashString("efa-only");

ClusterInterfaceType GetClusterInterfaceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == efa_HASH) {
    return ClusterInterfaceType::efa;
  } else if (hashCode == efa_only_HASH) {
    return ClusterInterfaceType::efa_only;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterInterfaceType>(hashCode);
  }

  return ClusterInterfaceType::NOT_SET;
}

Aws::String GetNameForClusterInterfaceType(ClusterInterfaceType enumValue) {
  switch (enumValue) {
    case ClusterInterfaceType::NOT_SET:
      return {};
    case ClusterInterfaceType::efa:
      return "efa";
    case ClusterInterfaceType::efa_only:
      return "efa-only";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterInterfaceTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
