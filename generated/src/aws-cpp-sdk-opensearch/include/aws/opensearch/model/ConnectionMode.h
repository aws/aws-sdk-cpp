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
  enum class ConnectionMode
  {
    NOT_SET,
    DIRECT,
    VPC_ENDPOINT
  };

namespace ConnectionModeMapper
{
AWS_OPENSEARCHSERVICE_API ConnectionMode GetConnectionModeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForConnectionMode(ConnectionMode value);
} // namespace ConnectionModeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
