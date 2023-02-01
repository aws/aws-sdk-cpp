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
  enum class EbuTtDDestinationStyleControl
  {
    NOT_SET,
    EXCLUDE,
    INCLUDE
  };

namespace EbuTtDDestinationStyleControlMapper
{
AWS_MEDIALIVE_API EbuTtDDestinationStyleControl GetEbuTtDDestinationStyleControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEbuTtDDestinationStyleControl(EbuTtDDestinationStyleControl value);
} // namespace EbuTtDDestinationStyleControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
