/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class ExportStatus
  {
    NOT_SET,
    PENDING,
    STARTED,
    FAILED,
    SUCCEEDED
  };

namespace ExportStatusMapper
{
AWS_MGN_API ExportStatus GetExportStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForExportStatus(ExportStatus value);
} // namespace ExportStatusMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
