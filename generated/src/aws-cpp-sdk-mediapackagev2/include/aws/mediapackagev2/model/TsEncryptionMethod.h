/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class TsEncryptionMethod
  {
    NOT_SET,
    AES_128,
    SAMPLE_AES
  };

namespace TsEncryptionMethodMapper
{
AWS_MEDIAPACKAGEV2_API TsEncryptionMethod GetTsEncryptionMethodForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForTsEncryptionMethod(TsEncryptionMethod value);
} // namespace TsEncryptionMethodMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
