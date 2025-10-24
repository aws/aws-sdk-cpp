﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/StorageGateway_EXPORTS.h>

namespace Aws {
namespace StorageGateway {
namespace Model {
enum class ActiveDirectoryStatus {
  NOT_SET,
  ACCESS_DENIED,
  DETACHED,
  JOINED,
  JOINING,
  NETWORK_ERROR,
  TIMEOUT,
  UNKNOWN_ERROR,
  INSUFFICIENT_PERMISSIONS
};

namespace ActiveDirectoryStatusMapper {
AWS_STORAGEGATEWAY_API ActiveDirectoryStatus GetActiveDirectoryStatusForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForActiveDirectoryStatus(ActiveDirectoryStatus value);
}  // namespace ActiveDirectoryStatusMapper
}  // namespace Model
}  // namespace StorageGateway
}  // namespace Aws
