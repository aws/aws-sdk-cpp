/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ManagedStorageType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ManagedStorageTypeMapper {

static const int Restricted_HASH = HashingUtils::HashString("Restricted");

ManagedStorageType GetManagedStorageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Restricted_HASH) {
    return ManagedStorageType::Restricted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedStorageType>(hashCode);
  }

  return ManagedStorageType::NOT_SET;
}

Aws::String GetNameForManagedStorageType(ManagedStorageType enumValue) {
  switch (enumValue) {
    case ManagedStorageType::NOT_SET:
      return {};
    case ManagedStorageType::Restricted:
      return "Restricted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedStorageTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
