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
  enum class CmafEncryptionType
  {
    NOT_SET,
    SAMPLE_AES,
    AES_CTR
  };

namespace CmafEncryptionTypeMapper
{
AWS_MEDIACONVERT_API CmafEncryptionType GetCmafEncryptionTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafEncryptionType(CmafEncryptionType value);
} // namespace CmafEncryptionTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
