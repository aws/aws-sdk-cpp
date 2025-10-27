/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/StorageGateway_EXPORTS.h>

namespace Aws {
namespace StorageGateway {
namespace Model {
enum class RetentionLockType { NOT_SET, COMPLIANCE, GOVERNANCE, NONE };

namespace RetentionLockTypeMapper {
AWS_STORAGEGATEWAY_API RetentionLockType GetRetentionLockTypeForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForRetentionLockType(RetentionLockType value);
}  // namespace RetentionLockTypeMapper
}  // namespace Model
}  // namespace StorageGateway
}  // namespace Aws
