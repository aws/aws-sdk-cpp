/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class NodeStatus
  {
    NOT_SET,
    Active,
    StandBy,
    NotAvailable
  };

namespace NodeStatusMapper
{
AWS_OPENSEARCHSERVICE_API NodeStatus GetNodeStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForNodeStatus(NodeStatus value);
} // namespace NodeStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
