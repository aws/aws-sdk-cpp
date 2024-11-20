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
  enum class RunCacheStatus
  {
    NOT_SET,
    ACTIVE,
    DELETED,
    FAILED
  };

namespace RunCacheStatusMapper
{
AWS_OMICS_API RunCacheStatus GetRunCacheStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForRunCacheStatus(RunCacheStatus value);
} // namespace RunCacheStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
