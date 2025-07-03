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
  enum class IsmEncryptionMethod
  {
    NOT_SET,
    CENC
  };

namespace IsmEncryptionMethodMapper
{
AWS_MEDIAPACKAGEV2_API IsmEncryptionMethod GetIsmEncryptionMethodForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForIsmEncryptionMethod(IsmEncryptionMethod value);
} // namespace IsmEncryptionMethodMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
