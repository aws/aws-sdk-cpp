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
  enum class DatabaseInsightsMode
  {
    NOT_SET,
    standard,
    advanced
  };

namespace DatabaseInsightsModeMapper
{
AWS_RDS_API DatabaseInsightsMode GetDatabaseInsightsModeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForDatabaseInsightsMode(DatabaseInsightsMode value);
} // namespace DatabaseInsightsModeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
