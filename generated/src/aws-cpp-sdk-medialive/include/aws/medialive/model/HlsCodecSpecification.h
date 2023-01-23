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
  enum class HlsCodecSpecification
  {
    NOT_SET,
    RFC_4281,
    RFC_6381
  };

namespace HlsCodecSpecificationMapper
{
AWS_MEDIALIVE_API HlsCodecSpecification GetHlsCodecSpecificationForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsCodecSpecification(HlsCodecSpecification value);
} // namespace HlsCodecSpecificationMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
