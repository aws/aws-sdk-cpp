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
  enum class Eac3LfeControl
  {
    NOT_SET,
    LFE,
    NO_LFE
  };

namespace Eac3LfeControlMapper
{
AWS_MEDIALIVE_API Eac3LfeControl GetEac3LfeControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3LfeControl(Eac3LfeControl value);
} // namespace Eac3LfeControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
