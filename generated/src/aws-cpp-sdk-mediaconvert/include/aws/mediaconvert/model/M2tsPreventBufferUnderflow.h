/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class M2tsPreventBufferUnderflow
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace M2tsPreventBufferUnderflowMapper
{
AWS_MEDIACONVERT_API M2tsPreventBufferUnderflow GetM2tsPreventBufferUnderflowForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsPreventBufferUnderflow(M2tsPreventBufferUnderflow value);
} // namespace M2tsPreventBufferUnderflowMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
