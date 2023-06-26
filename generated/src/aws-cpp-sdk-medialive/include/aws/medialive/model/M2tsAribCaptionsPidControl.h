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
  enum class M2tsAribCaptionsPidControl
  {
    NOT_SET,
    AUTO,
    USE_CONFIGURED
  };

namespace M2tsAribCaptionsPidControlMapper
{
AWS_MEDIALIVE_API M2tsAribCaptionsPidControl GetM2tsAribCaptionsPidControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsAribCaptionsPidControl(M2tsAribCaptionsPidControl value);
} // namespace M2tsAribCaptionsPidControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
