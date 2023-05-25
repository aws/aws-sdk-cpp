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
  enum class SourceType
  {
    NOT_SET,
    OWNED,
    ENTITLED
  };

namespace SourceTypeMapper
{
AWS_MEDIACONNECT_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
