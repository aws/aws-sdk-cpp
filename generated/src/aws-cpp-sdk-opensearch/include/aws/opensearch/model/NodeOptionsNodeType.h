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
  enum class NodeOptionsNodeType
  {
    NOT_SET,
    coordinator
  };

namespace NodeOptionsNodeTypeMapper
{
AWS_OPENSEARCHSERVICE_API NodeOptionsNodeType GetNodeOptionsNodeTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForNodeOptionsNodeType(NodeOptionsNodeType value);
} // namespace NodeOptionsNodeTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
