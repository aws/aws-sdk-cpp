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
  enum class Ac3AttenuationControl
  {
    NOT_SET,
    ATTENUATE_3_DB,
    NONE
  };

namespace Ac3AttenuationControlMapper
{
AWS_MEDIALIVE_API Ac3AttenuationControl GetAc3AttenuationControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAc3AttenuationControl(Ac3AttenuationControl value);
} // namespace Ac3AttenuationControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
