/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
enum class IngestionStreamStatus { NOT_SET, CREATING, ACTIVE, DELETING, DELETED, CREATE_FAILED, DELETE_FAILED };

namespace IngestionStreamStatusMapper {
AWS_OPENSEARCHSERVERLESS_API IngestionStreamStatus GetIngestionStreamStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForIngestionStreamStatus(IngestionStreamStatus value);
}  // namespace IngestionStreamStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
