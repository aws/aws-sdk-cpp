/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    DASH,
    HLS
  };

namespace TypeMapper
{
AWS_MEDIATAILOR_API Type GetTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
