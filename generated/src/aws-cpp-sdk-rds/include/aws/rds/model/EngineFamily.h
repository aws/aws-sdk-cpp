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
  enum class EngineFamily
  {
    NOT_SET,
    MYSQL,
    POSTGRESQL,
    SQLSERVER
  };

namespace EngineFamilyMapper
{
AWS_RDS_API EngineFamily GetEngineFamilyForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForEngineFamily(EngineFamily value);
} // namespace EngineFamilyMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
