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
enum class NetworkMigrationCodeGenerationArtifactSubType { NOT_SET, APPLICATION, NESTED_STACK, STACK };

namespace NetworkMigrationCodeGenerationArtifactSubTypeMapper {
AWS_MGN_API NetworkMigrationCodeGenerationArtifactSubType GetNetworkMigrationCodeGenerationArtifactSubTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForNetworkMigrationCodeGenerationArtifactSubType(NetworkMigrationCodeGenerationArtifactSubType value);
}  // namespace NetworkMigrationCodeGenerationArtifactSubTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
