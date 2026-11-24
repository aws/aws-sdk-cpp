/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayMemberFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace GlobalInferenceGatewayMemberFilterNameMapper {

static const int Status_HASH = HashingUtils::HashString("Status");
static const int ClusterArn_HASH = HashingUtils::HashString("ClusterArn");

GlobalInferenceGatewayMemberFilterName GetGlobalInferenceGatewayMemberFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Status_HASH) {
    return GlobalInferenceGatewayMemberFilterName::Status;
  } else if (hashCode == ClusterArn_HASH) {
    return GlobalInferenceGatewayMemberFilterName::ClusterArn;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GlobalInferenceGatewayMemberFilterName>(hashCode);
  }

  return GlobalInferenceGatewayMemberFilterName::NOT_SET;
}

Aws::String GetNameForGlobalInferenceGatewayMemberFilterName(GlobalInferenceGatewayMemberFilterName enumValue) {
  switch (enumValue) {
    case GlobalInferenceGatewayMemberFilterName::NOT_SET:
      return {};
    case GlobalInferenceGatewayMemberFilterName::Status:
      return "Status";
    case GlobalInferenceGatewayMemberFilterName::ClusterArn:
      return "ClusterArn";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GlobalInferenceGatewayMemberFilterNameMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
