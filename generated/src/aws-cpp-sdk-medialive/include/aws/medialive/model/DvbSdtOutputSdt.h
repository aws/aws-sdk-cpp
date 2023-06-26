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
  enum class DvbSdtOutputSdt
  {
    NOT_SET,
    SDT_FOLLOW,
    SDT_FOLLOW_IF_PRESENT,
    SDT_MANUAL,
    SDT_NONE
  };

namespace DvbSdtOutputSdtMapper
{
AWS_MEDIALIVE_API DvbSdtOutputSdt GetDvbSdtOutputSdtForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDvbSdtOutputSdt(DvbSdtOutputSdt value);
} // namespace DvbSdtOutputSdtMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
