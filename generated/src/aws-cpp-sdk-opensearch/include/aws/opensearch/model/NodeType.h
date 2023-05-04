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
  enum class NodeType
  {
    NOT_SET,
    Data,
    Ultrawarm,
    Master
  };

namespace NodeTypeMapper
{
AWS_OPENSEARCHSERVICE_API NodeType GetNodeTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForNodeType(NodeType value);
} // namespace NodeTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
