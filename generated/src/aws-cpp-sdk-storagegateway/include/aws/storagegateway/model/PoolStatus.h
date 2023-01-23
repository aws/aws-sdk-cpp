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
  enum class PoolStatus
  {
    NOT_SET,
    ACTIVE,
    DELETED
  };

namespace PoolStatusMapper
{
AWS_STORAGEGATEWAY_API PoolStatus GetPoolStatusForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForPoolStatus(PoolStatus value);
} // namespace PoolStatusMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
