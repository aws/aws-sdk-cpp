/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>

namespace Aws {
namespace MediaStoreData {
namespace Model {
enum class StorageClass { NOT_SET, TEMPORAL };

namespace StorageClassMapper {
AWS_MEDIASTOREDATA_API StorageClass GetStorageClassForName(const Aws::String& name);

AWS_MEDIASTOREDATA_API Aws::String GetNameForStorageClass(StorageClass value);
}  // namespace StorageClassMapper
}  // namespace Model
}  // namespace MediaStoreData
}  // namespace Aws
