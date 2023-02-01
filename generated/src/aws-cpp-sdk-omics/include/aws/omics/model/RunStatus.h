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
  enum class RunStatus
  {
    NOT_SET,
    PENDING,
    STARTING,
    RUNNING,
    STOPPING,
    COMPLETED,
    DELETED,
    CANCELLED,
    FAILED
  };

namespace RunStatusMapper
{
AWS_OMICS_API RunStatus GetRunStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForRunStatus(RunStatus value);
} // namespace RunStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
