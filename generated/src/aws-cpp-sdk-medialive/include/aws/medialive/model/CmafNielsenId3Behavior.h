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
  enum class CmafNielsenId3Behavior
  {
    NOT_SET,
    NO_PASSTHROUGH,
    PASSTHROUGH
  };

namespace CmafNielsenId3BehaviorMapper
{
AWS_MEDIALIVE_API CmafNielsenId3Behavior GetCmafNielsenId3BehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCmafNielsenId3Behavior(CmafNielsenId3Behavior value);
} // namespace CmafNielsenId3BehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
