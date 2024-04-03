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
  enum class Scte35Type
  {
    NOT_SET,
    NONE,
    SCTE_35_WITHOUT_SEGMENTATION
  };

namespace Scte35TypeMapper
{
AWS_MEDIALIVE_API Scte35Type GetScte35TypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35Type(Scte35Type value);
} // namespace Scte35TypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
