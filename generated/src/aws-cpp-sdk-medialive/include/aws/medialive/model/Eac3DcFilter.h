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
  enum class Eac3DcFilter
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Eac3DcFilterMapper
{
AWS_MEDIALIVE_API Eac3DcFilter GetEac3DcFilterForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3DcFilter(Eac3DcFilter value);
} // namespace Eac3DcFilterMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
