﻿/**
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
  enum class FlowSize
  {
    NOT_SET,
    MEDIUM,
    LARGE
  };

namespace FlowSizeMapper
{
AWS_MEDIACONNECT_API FlowSize GetFlowSizeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForFlowSize(FlowSize value);
} // namespace FlowSizeMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
