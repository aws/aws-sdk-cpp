/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
enum class SpaceStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, DELETED, FAILED };

namespace SpaceStatusMapper {
AWS_OPENSEARCHMEMORY_API SpaceStatus GetSpaceStatusForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForSpaceStatus(SpaceStatus value);
}  // namespace SpaceStatusMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
