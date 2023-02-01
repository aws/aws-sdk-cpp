/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class PlacementConstraintType
  {
    NOT_SET,
    distinctInstance,
    memberOf
  };

namespace PlacementConstraintTypeMapper
{
AWS_PIPES_API PlacementConstraintType GetPlacementConstraintTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForPlacementConstraintType(PlacementConstraintType value);
} // namespace PlacementConstraintTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
