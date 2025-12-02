/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ModelRegistrationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ModelRegistrationModeMapper {

static const int AutoModelRegistrationEnabled_HASH = HashingUtils::HashString("AutoModelRegistrationEnabled");
static const int AutoModelRegistrationDisabled_HASH = HashingUtils::HashString("AutoModelRegistrationDisabled");

ModelRegistrationMode GetModelRegistrationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AutoModelRegistrationEnabled_HASH) {
    return ModelRegistrationMode::AutoModelRegistrationEnabled;
  } else if (hashCode == AutoModelRegistrationDisabled_HASH) {
    return ModelRegistrationMode::AutoModelRegistrationDisabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ModelRegistrationMode>(hashCode);
  }

  return ModelRegistrationMode::NOT_SET;
}

Aws::String GetNameForModelRegistrationMode(ModelRegistrationMode enumValue) {
  switch (enumValue) {
    case ModelRegistrationMode::NOT_SET:
      return {};
    case ModelRegistrationMode::AutoModelRegistrationEnabled:
      return "AutoModelRegistrationEnabled";
    case ModelRegistrationMode::AutoModelRegistrationDisabled:
      return "AutoModelRegistrationDisabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ModelRegistrationModeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
