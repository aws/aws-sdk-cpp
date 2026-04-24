/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class NetworkMigrationCodeGenerationArtifactType {
  NOT_SET,
  CDK_TYPESCRIPT,
  CLOUDFORMATION_TEMPLATE,
  CDKTF_TYPESCRIPT,
  TERRAFORM_CONFIGURATION,
  CDK_L2_TYPESCRIPT
};

namespace NetworkMigrationCodeGenerationArtifactTypeMapper {
AWS_MGN_API NetworkMigrationCodeGenerationArtifactType GetNetworkMigrationCodeGenerationArtifactTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForNetworkMigrationCodeGenerationArtifactType(NetworkMigrationCodeGenerationArtifactType value);
}  // namespace NetworkMigrationCodeGenerationArtifactTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
