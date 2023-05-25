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
  enum class M2tsNielsenId3Behavior
  {
    NOT_SET,
    NO_PASSTHROUGH,
    PASSTHROUGH
  };

namespace M2tsNielsenId3BehaviorMapper
{
AWS_MEDIALIVE_API M2tsNielsenId3Behavior GetM2tsNielsenId3BehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsNielsenId3Behavior(M2tsNielsenId3Behavior value);
} // namespace M2tsNielsenId3BehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
