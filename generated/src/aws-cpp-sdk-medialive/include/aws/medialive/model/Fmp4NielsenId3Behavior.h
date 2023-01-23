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
  enum class Fmp4NielsenId3Behavior
  {
    NOT_SET,
    NO_PASSTHROUGH,
    PASSTHROUGH
  };

namespace Fmp4NielsenId3BehaviorMapper
{
AWS_MEDIALIVE_API Fmp4NielsenId3Behavior GetFmp4NielsenId3BehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForFmp4NielsenId3Behavior(Fmp4NielsenId3Behavior value);
} // namespace Fmp4NielsenId3BehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
