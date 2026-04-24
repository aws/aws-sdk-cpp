/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterSlurmNodeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterSlurmNodeTypeMapper {

static const int Controller_HASH = HashingUtils::HashString("Controller");
static const int Login_HASH = HashingUtils::HashString("Login");
static const int Compute_HASH = HashingUtils::HashString("Compute");

ClusterSlurmNodeType GetClusterSlurmNodeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Controller_HASH) {
    return ClusterSlurmNodeType::Controller;
  } else if (hashCode == Login_HASH) {
    return ClusterSlurmNodeType::Login;
  } else if (hashCode == Compute_HASH) {
    return ClusterSlurmNodeType::Compute;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterSlurmNodeType>(hashCode);
  }

  return ClusterSlurmNodeType::NOT_SET;
}

Aws::String GetNameForClusterSlurmNodeType(ClusterSlurmNodeType enumValue) {
  switch (enumValue) {
    case ClusterSlurmNodeType::NOT_SET:
      return {};
    case ClusterSlurmNodeType::Controller:
      return "Controller";
    case ClusterSlurmNodeType::Login:
      return "Login";
    case ClusterSlurmNodeType::Compute:
      return "Compute";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterSlurmNodeTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
