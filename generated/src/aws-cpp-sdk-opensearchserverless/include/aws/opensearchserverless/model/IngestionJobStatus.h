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
enum class IngestionJobStatus { NOT_SET, CREATING, ACTIVE, COMPLETED, CANCELLING, CANCELLED, FAILED, CREATE_FAILED, CANCEL_FAILED };

namespace IngestionJobStatusMapper {
AWS_OPENSEARCHSERVERLESS_API IngestionJobStatus GetIngestionJobStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForIngestionJobStatus(IngestionJobStatus value);
}  // namespace IngestionJobStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
