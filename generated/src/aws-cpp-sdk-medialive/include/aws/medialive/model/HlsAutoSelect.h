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
  enum class HlsAutoSelect
  {
    NOT_SET,
    NO,
    OMIT,
    YES
  };

namespace HlsAutoSelectMapper
{
AWS_MEDIALIVE_API HlsAutoSelect GetHlsAutoSelectForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsAutoSelect(HlsAutoSelect value);
} // namespace HlsAutoSelectMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
