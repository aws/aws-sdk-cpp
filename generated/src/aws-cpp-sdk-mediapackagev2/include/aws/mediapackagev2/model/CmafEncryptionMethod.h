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
  enum class CmafEncryptionMethod
  {
    NOT_SET,
    CENC,
    CBCS
  };

namespace CmafEncryptionMethodMapper
{
AWS_MEDIAPACKAGEV2_API CmafEncryptionMethod GetCmafEncryptionMethodForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForCmafEncryptionMethod(CmafEncryptionMethod value);
} // namespace CmafEncryptionMethodMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
