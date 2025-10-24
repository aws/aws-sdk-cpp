/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Model {
enum class SourceType {
  NOT_SET,
  db_instance,
  db_parameter_group,
  db_security_group,
  db_snapshot,
  db_cluster,
  db_cluster_snapshot,
  custom_engine_version,
  db_proxy,
  blue_green_deployment,
  db_shard_group,
  zero_etl
};

namespace SourceTypeMapper {
AWS_RDS_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForSourceType(SourceType value);
}  // namespace SourceTypeMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
