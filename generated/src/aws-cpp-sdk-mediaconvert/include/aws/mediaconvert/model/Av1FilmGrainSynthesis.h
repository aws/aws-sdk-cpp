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
  enum class Av1FilmGrainSynthesis
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Av1FilmGrainSynthesisMapper
{
AWS_MEDIACONVERT_API Av1FilmGrainSynthesis GetAv1FilmGrainSynthesisForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAv1FilmGrainSynthesis(Av1FilmGrainSynthesis value);
} // namespace Av1FilmGrainSynthesisMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
