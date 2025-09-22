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
  enum class H265GopBReference
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265GopBReferenceMapper
{
AWS_MEDIALIVE_API H265GopBReference GetH265GopBReferenceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265GopBReference(H265GopBReference value);
} // namespace H265GopBReferenceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
