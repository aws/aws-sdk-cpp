/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationArtifactType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace NetworkMigrationCodeGenerationArtifactTypeMapper {

static const int CDK_TYPESCRIPT_HASH = HashingUtils::HashString("CDK_TYPESCRIPT");
static const int CLOUDFORMATION_TEMPLATE_HASH = HashingUtils::HashString("CLOUDFORMATION_TEMPLATE");
static const int CDKTF_TYPESCRIPT_HASH = HashingUtils::HashString("CDKTF_TYPESCRIPT");
static const int TERRAFORM_CONFIGURATION_HASH = HashingUtils::HashString("TERRAFORM_CONFIGURATION");
static const int CDK_L2_TYPESCRIPT_HASH = HashingUtils::HashString("CDK_L2_TYPESCRIPT");

NetworkMigrationCodeGenerationArtifactType GetNetworkMigrationCodeGenerationArtifactTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CDK_TYPESCRIPT_HASH) {
    return NetworkMigrationCodeGenerationArtifactType::CDK_TYPESCRIPT;
  } else if (hashCode == CLOUDFORMATION_TEMPLATE_HASH) {
    return NetworkMigrationCodeGenerationArtifactType::CLOUDFORMATION_TEMPLATE;
  } else if (hashCode == CDKTF_TYPESCRIPT_HASH) {
    return NetworkMigrationCodeGenerationArtifactType::CDKTF_TYPESCRIPT;
  } else if (hashCode == TERRAFORM_CONFIGURATION_HASH) {
    return NetworkMigrationCodeGenerationArtifactType::TERRAFORM_CONFIGURATION;
  } else if (hashCode == CDK_L2_TYPESCRIPT_HASH) {
    return NetworkMigrationCodeGenerationArtifactType::CDK_L2_TYPESCRIPT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkMigrationCodeGenerationArtifactType>(hashCode);
  }

  return NetworkMigrationCodeGenerationArtifactType::NOT_SET;
}

Aws::String GetNameForNetworkMigrationCodeGenerationArtifactType(NetworkMigrationCodeGenerationArtifactType enumValue) {
  switch (enumValue) {
    case NetworkMigrationCodeGenerationArtifactType::NOT_SET:
      return {};
    case NetworkMigrationCodeGenerationArtifactType::CDK_TYPESCRIPT:
      return "CDK_TYPESCRIPT";
    case NetworkMigrationCodeGenerationArtifactType::CLOUDFORMATION_TEMPLATE:
      return "CLOUDFORMATION_TEMPLATE";
    case NetworkMigrationCodeGenerationArtifactType::CDKTF_TYPESCRIPT:
      return "CDKTF_TYPESCRIPT";
    case NetworkMigrationCodeGenerationArtifactType::TERRAFORM_CONFIGURATION:
      return "TERRAFORM_CONFIGURATION";
    case NetworkMigrationCodeGenerationArtifactType::CDK_L2_TYPESCRIPT:
      return "CDK_L2_TYPESCRIPT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkMigrationCodeGenerationArtifactTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
