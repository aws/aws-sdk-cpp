/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MWAA
{
namespace Model
{
  enum class WorkerReplacementStrategy
  {
    NOT_SET,
    FORCED,
    GRACEFUL
  };

namespace WorkerReplacementStrategyMapper
{
AWS_MWAA_API WorkerReplacementStrategy GetWorkerReplacementStrategyForName(const Aws::String& name);

AWS_MWAA_API Aws::String GetNameForWorkerReplacementStrategy(WorkerReplacementStrategy value);
} // namespace WorkerReplacementStrategyMapper
} // namespace Model
} // namespace MWAA
} // namespace Aws
