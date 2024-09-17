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
  enum class InputNetworkLocation
  {
    NOT_SET,
    AWS,
    ON_PREMISES
  };

namespace InputNetworkLocationMapper
{
AWS_MEDIALIVE_API InputNetworkLocation GetInputNetworkLocationForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputNetworkLocation(InputNetworkLocation value);
} // namespace InputNetworkLocationMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
