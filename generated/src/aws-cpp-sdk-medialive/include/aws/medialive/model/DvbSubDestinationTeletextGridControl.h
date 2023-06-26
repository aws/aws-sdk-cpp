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
  enum class DvbSubDestinationTeletextGridControl
  {
    NOT_SET,
    FIXED,
    SCALED
  };

namespace DvbSubDestinationTeletextGridControlMapper
{
AWS_MEDIALIVE_API DvbSubDestinationTeletextGridControl GetDvbSubDestinationTeletextGridControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDvbSubDestinationTeletextGridControl(DvbSubDestinationTeletextGridControl value);
} // namespace DvbSubDestinationTeletextGridControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
