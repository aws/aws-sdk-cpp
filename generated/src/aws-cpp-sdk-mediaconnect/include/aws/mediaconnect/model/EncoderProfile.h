/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class EncoderProfile
  {
    NOT_SET,
    main,
    high
  };

namespace EncoderProfileMapper
{
AWS_MEDIACONNECT_API EncoderProfile GetEncoderProfileForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForEncoderProfile(EncoderProfile value);
} // namespace EncoderProfileMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
