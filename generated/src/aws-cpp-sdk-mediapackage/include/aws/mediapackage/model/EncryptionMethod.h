/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{
  enum class EncryptionMethod
  {
    NOT_SET,
    AES_128,
    SAMPLE_AES
  };

namespace EncryptionMethodMapper
{
AWS_MEDIAPACKAGE_API EncryptionMethod GetEncryptionMethodForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForEncryptionMethod(EncryptionMethod value);
} // namespace EncryptionMethodMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
