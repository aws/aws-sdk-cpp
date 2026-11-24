/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayMemberStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace GlobalInferenceGatewayMemberStatusMapper {

static const int ADDING_HASH = HashingUtils::HashString("ADDING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int REMOVING_HASH = HashingUtils::HashString("REMOVING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

GlobalInferenceGatewayMemberStatus GetGlobalInferenceGatewayMemberStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADDING_HASH) {
    return GlobalInferenceGatewayMemberStatus::ADDING;
  } else if (hashCode == ACTIVE_HASH) {
    return GlobalInferenceGatewayMemberStatus::ACTIVE;
  } else if (hashCode == REMOVING_HASH) {
    return GlobalInferenceGatewayMemberStatus::REMOVING;
  } else if (hashCode == FAILED_HASH) {
    return GlobalInferenceGatewayMemberStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GlobalInferenceGatewayMemberStatus>(hashCode);
  }

  return GlobalInferenceGatewayMemberStatus::NOT_SET;
}

Aws::String GetNameForGlobalInferenceGatewayMemberStatus(GlobalInferenceGatewayMemberStatus enumValue) {
  switch (enumValue) {
    case GlobalInferenceGatewayMemberStatus::NOT_SET:
      return {};
    case GlobalInferenceGatewayMemberStatus::ADDING:
      return "ADDING";
    case GlobalInferenceGatewayMemberStatus::ACTIVE:
      return "ACTIVE";
    case GlobalInferenceGatewayMemberStatus::REMOVING:
      return "REMOVING";
    case GlobalInferenceGatewayMemberStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GlobalInferenceGatewayMemberStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
