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
enum class NetworkMigrationMapperSegmentType { NOT_SET, WORKLOAD, APPLIANCE };

namespace NetworkMigrationMapperSegmentTypeMapper {
AWS_MGN_API NetworkMigrationMapperSegmentType GetNetworkMigrationMapperSegmentTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForNetworkMigrationMapperSegmentType(NetworkMigrationMapperSegmentType value);
}  // namespace NetworkMigrationMapperSegmentTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
