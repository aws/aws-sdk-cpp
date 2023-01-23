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
  enum class TapeStorageClass
  {
    NOT_SET,
    DEEP_ARCHIVE,
    GLACIER
  };

namespace TapeStorageClassMapper
{
AWS_STORAGEGATEWAY_API TapeStorageClass GetTapeStorageClassForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForTapeStorageClass(TapeStorageClass value);
} // namespace TapeStorageClassMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
