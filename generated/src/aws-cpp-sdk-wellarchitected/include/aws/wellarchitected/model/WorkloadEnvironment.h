/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class WorkloadEnvironment
  {
    NOT_SET,
    PRODUCTION,
    PREPRODUCTION
  };

namespace WorkloadEnvironmentMapper
{
AWS_WELLARCHITECTED_API WorkloadEnvironment GetWorkloadEnvironmentForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForWorkloadEnvironment(WorkloadEnvironment value);
} // namespace WorkloadEnvironmentMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
