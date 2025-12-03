/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ServerlessJobType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ServerlessJobTypeMapper {

static const int FineTuning_HASH = HashingUtils::HashString("FineTuning");
static const int Evaluation_HASH = HashingUtils::HashString("Evaluation");

ServerlessJobType GetServerlessJobTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FineTuning_HASH) {
    return ServerlessJobType::FineTuning;
  } else if (hashCode == Evaluation_HASH) {
    return ServerlessJobType::Evaluation;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServerlessJobType>(hashCode);
  }

  return ServerlessJobType::NOT_SET;
}

Aws::String GetNameForServerlessJobType(ServerlessJobType enumValue) {
  switch (enumValue) {
    case ServerlessJobType::NOT_SET:
      return {};
    case ServerlessJobType::FineTuning:
      return "FineTuning";
    case ServerlessJobType::Evaluation:
      return "Evaluation";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServerlessJobTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
