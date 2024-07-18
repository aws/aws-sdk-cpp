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
  enum class Algorithm
  {
    NOT_SET,
    AES128,
    AES192,
    AES256
  };

namespace AlgorithmMapper
{
AWS_MEDIALIVE_API Algorithm GetAlgorithmForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAlgorithm(Algorithm value);
} // namespace AlgorithmMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
