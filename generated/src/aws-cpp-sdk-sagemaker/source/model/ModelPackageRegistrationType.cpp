/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ModelPackageRegistrationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ModelPackageRegistrationTypeMapper {

static const int Logged_HASH = HashingUtils::HashString("Logged");
static const int Registered_HASH = HashingUtils::HashString("Registered");

ModelPackageRegistrationType GetModelPackageRegistrationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Logged_HASH) {
    return ModelPackageRegistrationType::Logged;
  } else if (hashCode == Registered_HASH) {
    return ModelPackageRegistrationType::Registered;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ModelPackageRegistrationType>(hashCode);
  }

  return ModelPackageRegistrationType::NOT_SET;
}

Aws::String GetNameForModelPackageRegistrationType(ModelPackageRegistrationType enumValue) {
  switch (enumValue) {
    case ModelPackageRegistrationType::NOT_SET:
      return {};
    case ModelPackageRegistrationType::Logged:
      return "Logged";
    case ModelPackageRegistrationType::Registered:
      return "Registered";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ModelPackageRegistrationTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
