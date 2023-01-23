/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class Eac3AtmosDialogueIntelligence
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace Eac3AtmosDialogueIntelligenceMapper
{
AWS_MEDIACONVERT_API Eac3AtmosDialogueIntelligence GetEac3AtmosDialogueIntelligenceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3AtmosDialogueIntelligence(Eac3AtmosDialogueIntelligence value);
} // namespace Eac3AtmosDialogueIntelligenceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
