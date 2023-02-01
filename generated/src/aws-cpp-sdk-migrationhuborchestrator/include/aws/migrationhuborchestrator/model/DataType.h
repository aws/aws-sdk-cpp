/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{
  enum class DataType
  {
    NOT_SET,
    STRING,
    INTEGER,
    STRINGLIST,
    STRINGMAP
  };

namespace DataTypeMapper
{
AWS_MIGRATIONHUBORCHESTRATOR_API DataType GetDataTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBORCHESTRATOR_API Aws::String GetNameForDataType(DataType value);
} // namespace DataTypeMapper
} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
