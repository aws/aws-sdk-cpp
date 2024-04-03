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
  enum class DvbDashAccessibility
  {
    NOT_SET,
    DVBDASH_1_VISUALLY_IMPAIRED,
    DVBDASH_2_HARD_OF_HEARING,
    DVBDASH_3_SUPPLEMENTAL_COMMENTARY,
    DVBDASH_4_DIRECTORS_COMMENTARY,
    DVBDASH_5_EDUCATIONAL_NOTES,
    DVBDASH_6_MAIN_PROGRAM,
    DVBDASH_7_CLEAN_FEED
  };

namespace DvbDashAccessibilityMapper
{
AWS_MEDIALIVE_API DvbDashAccessibility GetDvbDashAccessibilityForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForDvbDashAccessibility(DvbDashAccessibility value);
} // namespace DvbDashAccessibilityMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
