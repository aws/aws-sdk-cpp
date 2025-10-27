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
enum class ClusterScalabilityType { NOT_SET, standard, limitless, scaleout };

namespace ClusterScalabilityTypeMapper {
AWS_RDS_API ClusterScalabilityType GetClusterScalabilityTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForClusterScalabilityType(ClusterScalabilityType value);
}  // namespace ClusterScalabilityTypeMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
