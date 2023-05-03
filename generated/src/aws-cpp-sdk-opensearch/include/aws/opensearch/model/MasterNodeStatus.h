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
  enum class MasterNodeStatus
  {
    NOT_SET,
    Available,
    UnAvailable
  };

namespace MasterNodeStatusMapper
{
AWS_OPENSEARCHSERVICE_API MasterNodeStatus GetMasterNodeStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForMasterNodeStatus(MasterNodeStatus value);
} // namespace MasterNodeStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
