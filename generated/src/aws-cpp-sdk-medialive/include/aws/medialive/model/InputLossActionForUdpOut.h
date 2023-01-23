/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class InputLossActionForUdpOut
  {
    NOT_SET,
    DROP_PROGRAM,
    DROP_TS,
    EMIT_PROGRAM
  };

namespace InputLossActionForUdpOutMapper
{
AWS_MEDIALIVE_API InputLossActionForUdpOut GetInputLossActionForUdpOutForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputLossActionForUdpOut(InputLossActionForUdpOut value);
} // namespace InputLossActionForUdpOutMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
