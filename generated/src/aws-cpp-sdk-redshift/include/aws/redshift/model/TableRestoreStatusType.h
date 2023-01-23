/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class TableRestoreStatusType
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED,
    CANCELED
  };

namespace TableRestoreStatusTypeMapper
{
AWS_REDSHIFT_API TableRestoreStatusType GetTableRestoreStatusTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForTableRestoreStatusType(TableRestoreStatusType value);
} // namespace TableRestoreStatusTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
