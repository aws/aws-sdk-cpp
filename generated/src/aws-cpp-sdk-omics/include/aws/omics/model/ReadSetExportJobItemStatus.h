/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class ReadSetExportJobItemStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    FINISHED,
    FAILED
  };

namespace ReadSetExportJobItemStatusMapper
{
AWS_OMICS_API ReadSetExportJobItemStatus GetReadSetExportJobItemStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReadSetExportJobItemStatus(ReadSetExportJobItemStatus value);
} // namespace ReadSetExportJobItemStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
