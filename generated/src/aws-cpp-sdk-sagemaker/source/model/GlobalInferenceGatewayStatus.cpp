/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace GlobalInferenceGatewayStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

GlobalInferenceGatewayStatus GetGlobalInferenceGatewayStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return GlobalInferenceGatewayStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return GlobalInferenceGatewayStatus::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return GlobalInferenceGatewayStatus::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return GlobalInferenceGatewayStatus::DELETING;
  } else if (hashCode == FAILED_HASH) {
    return GlobalInferenceGatewayStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GlobalInferenceGatewayStatus>(hashCode);
  }

  return GlobalInferenceGatewayStatus::NOT_SET;
}

Aws::String GetNameForGlobalInferenceGatewayStatus(GlobalInferenceGatewayStatus enumValue) {
  switch (enumValue) {
    case GlobalInferenceGatewayStatus::NOT_SET:
      return {};
    case GlobalInferenceGatewayStatus::CREATING:
      return "CREATING";
    case GlobalInferenceGatewayStatus::ACTIVE:
      return "ACTIVE";
    case GlobalInferenceGatewayStatus::UPDATING:
      return "UPDATING";
    case GlobalInferenceGatewayStatus::DELETING:
      return "DELETING";
    case GlobalInferenceGatewayStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GlobalInferenceGatewayStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
