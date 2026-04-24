/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ActiveClusterOperationName.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ActiveClusterOperationNameMapper {

static const int Scaling_HASH = HashingUtils::HashString("Scaling");

ActiveClusterOperationName GetActiveClusterOperationNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Scaling_HASH) {
    return ActiveClusterOperationName::Scaling;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActiveClusterOperationName>(hashCode);
  }

  return ActiveClusterOperationName::NOT_SET;
}

Aws::String GetNameForActiveClusterOperationName(ActiveClusterOperationName enumValue) {
  switch (enumValue) {
    case ActiveClusterOperationName::NOT_SET:
      return {};
    case ActiveClusterOperationName::Scaling:
      return "Scaling";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActiveClusterOperationNameMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
