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
  enum class M2tsScte35Control
  {
    NOT_SET,
    NONE,
    PASSTHROUGH
  };

namespace M2tsScte35ControlMapper
{
AWS_MEDIALIVE_API M2tsScte35Control GetM2tsScte35ControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsScte35Control(M2tsScte35Control value);
} // namespace M2tsScte35ControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
