/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class EncryptionMode
  {
    NOT_SET,
    SSE_S3,
    SSE_KMS
  };

namespace EncryptionModeMapper
{
AWS_SYNTHETICS_API EncryptionMode GetEncryptionModeForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForEncryptionMode(EncryptionMode value);
} // namespace EncryptionModeMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
