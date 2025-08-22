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
  enum class BurnInDestinationSubtitleRows
  {
    NOT_SET,
    ROWS_16,
    ROWS_20,
    ROWS_24
  };

namespace BurnInDestinationSubtitleRowsMapper
{
AWS_MEDIALIVE_API BurnInDestinationSubtitleRows GetBurnInDestinationSubtitleRowsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForBurnInDestinationSubtitleRows(BurnInDestinationSubtitleRows value);
} // namespace BurnInDestinationSubtitleRowsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
