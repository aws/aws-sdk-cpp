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
  enum class ReadSetImportJobItemStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    FINISHED,
    FAILED
  };

namespace ReadSetImportJobItemStatusMapper
{
AWS_OMICS_API ReadSetImportJobItemStatus GetReadSetImportJobItemStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReadSetImportJobItemStatus(ReadSetImportJobItemStatus value);
} // namespace ReadSetImportJobItemStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
