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
  enum class Ac3LfeFilter
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Ac3LfeFilterMapper
{
AWS_MEDIALIVE_API Ac3LfeFilter GetAc3LfeFilterForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAc3LfeFilter(Ac3LfeFilter value);
} // namespace Ac3LfeFilterMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
