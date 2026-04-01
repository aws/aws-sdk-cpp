/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Model {
enum class CapabilityStatus { NOT_SET, creating, create_failed, active, updating, update_failed, deleting, delete_failed };

namespace CapabilityStatusMapper {
AWS_OPENSEARCHSERVICE_API CapabilityStatus GetCapabilityStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForCapabilityStatus(CapabilityStatus value);
}  // namespace CapabilityStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
