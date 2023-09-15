/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace neptunedata
{
namespace Model
{
  enum class Mode
  {
    NOT_SET,
    RESUME,
    NEW_,
    AUTO
  };

namespace ModeMapper
{
AWS_NEPTUNEDATA_API Mode GetModeForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForMode(Mode value);
} // namespace ModeMapper
} // namespace Model
} // namespace neptunedata
} // namespace Aws
