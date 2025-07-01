/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace odb
{
namespace Model
{
  enum class Objective
  {
    NOT_SET,
    AUTO,
    BALANCED,
    BASIC,
    HIGH_THROUGHPUT,
    LOW_LATENCY
  };

namespace ObjectiveMapper
{
AWS_ODB_API Objective GetObjectiveForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForObjective(Objective value);
} // namespace ObjectiveMapper
} // namespace Model
} // namespace odb
} // namespace Aws
