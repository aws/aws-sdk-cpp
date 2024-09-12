/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class EncryptionType
  {
    NOT_SET,
    SseS3,
    SseKms,
    DsseKms
  };

namespace EncryptionTypeMapper
{
AWS_STORAGEGATEWAY_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
