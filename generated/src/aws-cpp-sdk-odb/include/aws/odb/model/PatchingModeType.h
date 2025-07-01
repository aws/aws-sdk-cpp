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
  enum class PatchingModeType
  {
    NOT_SET,
    ROLLING,
    NONROLLING
  };

namespace PatchingModeTypeMapper
{
AWS_ODB_API PatchingModeType GetPatchingModeTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForPatchingModeType(PatchingModeType value);
} // namespace PatchingModeTypeMapper
} // namespace Model
} // namespace odb
} // namespace Aws
