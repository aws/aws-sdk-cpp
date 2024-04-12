/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class InsertionMode
  {
    NOT_SET,
    STITCHED_ONLY,
    PLAYER_SELECT
  };

namespace InsertionModeMapper
{
AWS_MEDIATAILOR_API InsertionMode GetInsertionModeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForInsertionMode(InsertionMode value);
} // namespace InsertionModeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
