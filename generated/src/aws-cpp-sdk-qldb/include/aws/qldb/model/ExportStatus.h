/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QLDB
{
namespace Model
{
  enum class ExportStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    CANCELLED
  };

namespace ExportStatusMapper
{
AWS_QLDB_API ExportStatus GetExportStatusForName(const Aws::String& name);

AWS_QLDB_API Aws::String GetNameForExportStatus(ExportStatus value);
} // namespace ExportStatusMapper
} // namespace Model
} // namespace QLDB
} // namespace Aws
