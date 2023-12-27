/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace neptunedata
{
namespace Model
{
  enum class Parallelism
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH,
    OVERSUBSCRIBE
  };

namespace ParallelismMapper
{
AWS_NEPTUNEDATA_API Parallelism GetParallelismForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForParallelism(Parallelism value);
} // namespace ParallelismMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
