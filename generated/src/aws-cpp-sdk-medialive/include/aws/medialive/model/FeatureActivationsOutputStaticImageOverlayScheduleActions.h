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
  enum class FeatureActivationsOutputStaticImageOverlayScheduleActions
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace FeatureActivationsOutputStaticImageOverlayScheduleActionsMapper
{
AWS_MEDIALIVE_API FeatureActivationsOutputStaticImageOverlayScheduleActions GetFeatureActivationsOutputStaticImageOverlayScheduleActionsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForFeatureActivationsOutputStaticImageOverlayScheduleActions(FeatureActivationsOutputStaticImageOverlayScheduleActions value);
} // namespace FeatureActivationsOutputStaticImageOverlayScheduleActionsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
