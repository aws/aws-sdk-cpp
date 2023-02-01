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
  enum class CmafEncryptionMethod
  {
    NOT_SET,
    SAMPLE_AES,
    AES_CTR
  };

namespace CmafEncryptionMethodMapper
{
AWS_MEDIAPACKAGE_API CmafEncryptionMethod GetCmafEncryptionMethodForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForCmafEncryptionMethod(CmafEncryptionMethod value);
} // namespace CmafEncryptionMethodMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
