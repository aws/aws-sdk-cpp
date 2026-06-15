/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class StorageType { NOT_SET, EBS, FSX_ONTAP };

namespace StorageTypeMapper {
AWS_MGN_API StorageType GetStorageTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForStorageType(StorageType value);
}  // namespace StorageTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
