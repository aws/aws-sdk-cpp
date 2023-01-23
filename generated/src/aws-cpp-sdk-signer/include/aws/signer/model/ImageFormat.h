/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace signer
{
namespace Model
{
  enum class ImageFormat
  {
    NOT_SET,
    JSON,
    JSONEmbedded,
    JSONDetached
  };

namespace ImageFormatMapper
{
AWS_SIGNER_API ImageFormat GetImageFormatForName(const Aws::String& name);

AWS_SIGNER_API Aws::String GetNameForImageFormat(ImageFormat value);
} // namespace ImageFormatMapper
} // namespace Model
} // namespace signer
} // namespace Aws
