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
  enum class FixedAfd
  {
    NOT_SET,
    AFD_0000,
    AFD_0010,
    AFD_0011,
    AFD_0100,
    AFD_1000,
    AFD_1001,
    AFD_1010,
    AFD_1011,
    AFD_1101,
    AFD_1110,
    AFD_1111
  };

namespace FixedAfdMapper
{
AWS_MEDIALIVE_API FixedAfd GetFixedAfdForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForFixedAfd(FixedAfd value);
} // namespace FixedAfdMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
