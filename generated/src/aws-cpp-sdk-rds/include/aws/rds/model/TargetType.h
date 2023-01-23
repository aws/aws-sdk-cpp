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
  enum class TargetType
  {
    NOT_SET,
    RDS_INSTANCE,
    RDS_SERVERLESS_ENDPOINT,
    TRACKED_CLUSTER
  };

namespace TargetTypeMapper
{
AWS_RDS_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForTargetType(TargetType value);
} // namespace TargetTypeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
