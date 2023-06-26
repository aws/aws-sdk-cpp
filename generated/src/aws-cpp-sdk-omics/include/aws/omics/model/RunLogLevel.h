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
  enum class RunLogLevel
  {
    NOT_SET,
    OFF,
    FATAL,
    ERROR_,
    ALL
  };

namespace RunLogLevelMapper
{
AWS_OMICS_API RunLogLevel GetRunLogLevelForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForRunLogLevel(RunLogLevel value);
} // namespace RunLogLevelMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
