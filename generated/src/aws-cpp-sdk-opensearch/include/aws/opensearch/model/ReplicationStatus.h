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
enum class ReplicationStatus { NOT_SET, PENDING_SETUP, ACTIVE, SWITCHING_OVER, FAILING_OVER, PENDING_REMOVAL, DETACHED, EJECTED, FAILED };

namespace ReplicationStatusMapper {
AWS_OPENSEARCHSERVICE_API ReplicationStatus GetReplicationStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForReplicationStatus(ReplicationStatus value);
}  // namespace ReplicationStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
