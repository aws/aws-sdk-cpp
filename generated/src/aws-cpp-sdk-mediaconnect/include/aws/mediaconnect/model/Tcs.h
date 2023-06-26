/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class Tcs
  {
    NOT_SET,
    SDR,
    PQ,
    HLG,
    LINEAR,
    BT2100LINPQ,
    BT2100LINHLG,
    ST2065_1,
    ST428_1,
    DENSITY
  };

namespace TcsMapper
{
AWS_MEDIACONNECT_API Tcs GetTcsForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForTcs(Tcs value);
} // namespace TcsMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
