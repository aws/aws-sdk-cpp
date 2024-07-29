/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class EncryptionType
  {
    NOT_SET,
    AWS_OWNED_KEY,
    CUSTOMER_MANAGED_KMS_KEY
  };

namespace EncryptionTypeMapper
{
AWS_SFN_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
