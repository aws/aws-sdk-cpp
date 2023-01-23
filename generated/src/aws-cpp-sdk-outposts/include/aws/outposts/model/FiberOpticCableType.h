/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class FiberOpticCableType
  {
    NOT_SET,
    SINGLE_MODE,
    MULTI_MODE
  };

namespace FiberOpticCableTypeMapper
{
AWS_OUTPOSTS_API FiberOpticCableType GetFiberOpticCableTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForFiberOpticCableType(FiberOpticCableType value);
} // namespace FiberOpticCableTypeMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
