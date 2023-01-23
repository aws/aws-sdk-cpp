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
  enum class Scte35SpliceInsertNoRegionalBlackoutBehavior
  {
    NOT_SET,
    FOLLOW,
    IGNORE
  };

namespace Scte35SpliceInsertNoRegionalBlackoutBehaviorMapper
{
AWS_MEDIALIVE_API Scte35SpliceInsertNoRegionalBlackoutBehavior GetScte35SpliceInsertNoRegionalBlackoutBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35SpliceInsertNoRegionalBlackoutBehavior(Scte35SpliceInsertNoRegionalBlackoutBehavior value);
} // namespace Scte35SpliceInsertNoRegionalBlackoutBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
