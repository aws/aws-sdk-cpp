/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace WorkSpaces {
namespace Model {
enum class StorageConnectorTypeEnum { NOT_SET, HOME_FOLDER };

namespace StorageConnectorTypeEnumMapper {
AWS_WORKSPACES_API StorageConnectorTypeEnum GetStorageConnectorTypeEnumForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForStorageConnectorTypeEnum(StorageConnectorTypeEnum value);
}  // namespace StorageConnectorTypeEnumMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
