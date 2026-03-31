/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationArtifactSubType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace NetworkMigrationCodeGenerationArtifactSubTypeMapper {

static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");
static const int NESTED_STACK_HASH = HashingUtils::HashString("NESTED_STACK");
static const int STACK_HASH = HashingUtils::HashString("STACK");

NetworkMigrationCodeGenerationArtifactSubType GetNetworkMigrationCodeGenerationArtifactSubTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == APPLICATION_HASH) {
    return NetworkMigrationCodeGenerationArtifactSubType::APPLICATION;
  } else if (hashCode == NESTED_STACK_HASH) {
    return NetworkMigrationCodeGenerationArtifactSubType::NESTED_STACK;
  } else if (hashCode == STACK_HASH) {
    return NetworkMigrationCodeGenerationArtifactSubType::STACK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkMigrationCodeGenerationArtifactSubType>(hashCode);
  }

  return NetworkMigrationCodeGenerationArtifactSubType::NOT_SET;
}

Aws::String GetNameForNetworkMigrationCodeGenerationArtifactSubType(NetworkMigrationCodeGenerationArtifactSubType enumValue) {
  switch (enumValue) {
    case NetworkMigrationCodeGenerationArtifactSubType::NOT_SET:
      return {};
    case NetworkMigrationCodeGenerationArtifactSubType::APPLICATION:
      return "APPLICATION";
    case NetworkMigrationCodeGenerationArtifactSubType::NESTED_STACK:
      return "NESTED_STACK";
    case NetworkMigrationCodeGenerationArtifactSubType::STACK:
      return "STACK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkMigrationCodeGenerationArtifactSubTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
