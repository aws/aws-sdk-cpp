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
enum class ReplicationRole { NOT_SET, PRIMARY, SECONDARY };

namespace ReplicationRoleMapper {
AWS_OPENSEARCHSERVICE_API ReplicationRole GetReplicationRoleForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForReplicationRole(ReplicationRole value);
}  // namespace ReplicationRoleMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
