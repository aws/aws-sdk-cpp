/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/SlurmHealthComponent.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace SlurmHealthComponentMapper {

static const int Slurmdbd_HASH = HashingUtils::HashString("Slurmdbd");

SlurmHealthComponent GetSlurmHealthComponentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Slurmdbd_HASH) {
    return SlurmHealthComponent::Slurmdbd;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SlurmHealthComponent>(hashCode);
  }

  return SlurmHealthComponent::NOT_SET;
}

Aws::String GetNameForSlurmHealthComponent(SlurmHealthComponent enumValue) {
  switch (enumValue) {
    case SlurmHealthComponent::NOT_SET:
      return {};
    case SlurmHealthComponent::Slurmdbd:
      return "Slurmdbd";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SlurmHealthComponentMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
