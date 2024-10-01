/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class ClusterScalabilityType
  {
    NOT_SET,
    standard,
    limitless
  };

namespace ClusterScalabilityTypeMapper
{
AWS_RDS_API ClusterScalabilityType GetClusterScalabilityTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForClusterScalabilityType(ClusterScalabilityType value);
} // namespace ClusterScalabilityTypeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
