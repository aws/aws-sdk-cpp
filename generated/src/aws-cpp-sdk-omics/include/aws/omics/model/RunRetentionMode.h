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
  enum class RunRetentionMode
  {
    NOT_SET,
    RETAIN,
    REMOVE
  };

namespace RunRetentionModeMapper
{
AWS_OMICS_API RunRetentionMode GetRunRetentionModeForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForRunRetentionMode(RunRetentionMode value);
} // namespace RunRetentionModeMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
