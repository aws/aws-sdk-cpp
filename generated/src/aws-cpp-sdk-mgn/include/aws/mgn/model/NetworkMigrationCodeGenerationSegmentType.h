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
enum class NetworkMigrationCodeGenerationSegmentType { NOT_SET, WORKLOAD, APPLIANCE, NETWORK };

namespace NetworkMigrationCodeGenerationSegmentTypeMapper {
AWS_MGN_API NetworkMigrationCodeGenerationSegmentType GetNetworkMigrationCodeGenerationSegmentTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForNetworkMigrationCodeGenerationSegmentType(NetworkMigrationCodeGenerationSegmentType value);
}  // namespace NetworkMigrationCodeGenerationSegmentTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
