/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterOperationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterOperationTypeMapper {

static const int Scaling_HASH = HashingUtils::HashString("Scaling");
static const int DeepHealthCheck_HASH = HashingUtils::HashString("DeepHealthCheck");

ClusterOperationType GetClusterOperationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Scaling_HASH) {
    return ClusterOperationType::Scaling;
  } else if (hashCode == DeepHealthCheck_HASH) {
    return ClusterOperationType::DeepHealthCheck;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterOperationType>(hashCode);
  }

  return ClusterOperationType::NOT_SET;
}

Aws::String GetNameForClusterOperationType(ClusterOperationType enumValue) {
  switch (enumValue) {
    case ClusterOperationType::NOT_SET:
      return {};
    case ClusterOperationType::Scaling:
      return "Scaling";
    case ClusterOperationType::DeepHealthCheck:
      return "DeepHealthCheck";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterOperationTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
