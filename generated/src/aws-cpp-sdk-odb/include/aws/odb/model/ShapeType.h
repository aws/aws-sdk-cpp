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
  enum class ShapeType
  {
    NOT_SET,
    AMD,
    INTEL,
    INTEL_FLEX_X9,
    AMPERE_FLEX_A1
  };

namespace ShapeTypeMapper
{
AWS_ODB_API ShapeType GetShapeTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForShapeType(ShapeType value);
} // namespace ShapeTypeMapper
} // namespace Model
} // namespace odb
} // namespace Aws
