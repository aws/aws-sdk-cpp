/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class Unit
  {
    NOT_SET,
    BITS,
    BYTES,
    PACKETS,
    REQUESTS
  };

namespace UnitMapper
{
AWS_SHIELD_API Unit GetUnitForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForUnit(Unit value);
} // namespace UnitMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
