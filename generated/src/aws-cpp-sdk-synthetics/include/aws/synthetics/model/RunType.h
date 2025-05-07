/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class RunType
  {
    NOT_SET,
    CANARY_RUN,
    DRY_RUN
  };

namespace RunTypeMapper
{
AWS_SYNTHETICS_API RunType GetRunTypeForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForRunType(RunType value);
} // namespace RunTypeMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
