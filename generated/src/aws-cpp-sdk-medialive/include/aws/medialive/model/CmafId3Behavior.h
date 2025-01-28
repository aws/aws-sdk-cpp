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
  enum class CmafId3Behavior
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace CmafId3BehaviorMapper
{
AWS_MEDIALIVE_API CmafId3Behavior GetCmafId3BehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForCmafId3Behavior(CmafId3Behavior value);
} // namespace CmafId3BehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
