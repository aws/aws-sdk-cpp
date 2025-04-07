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
  enum class SdiSourceState
  {
    NOT_SET,
    IDLE,
    IN_USE,
    DELETED
  };

namespace SdiSourceStateMapper
{
AWS_MEDIALIVE_API SdiSourceState GetSdiSourceStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSdiSourceState(SdiSourceState value);
} // namespace SdiSourceStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
