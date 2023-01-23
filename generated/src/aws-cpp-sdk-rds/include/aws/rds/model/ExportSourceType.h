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
  enum class ExportSourceType
  {
    NOT_SET,
    SNAPSHOT,
    CLUSTER
  };

namespace ExportSourceTypeMapper
{
AWS_RDS_API ExportSourceType GetExportSourceTypeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForExportSourceType(ExportSourceType value);
} // namespace ExportSourceTypeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
