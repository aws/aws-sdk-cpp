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
  enum class ConfigChangeStatus
  {
    NOT_SET,
    Pending,
    Initializing,
    Validating,
    ValidationFailed,
    ApplyingChanges,
    Completed,
    PendingUserInput,
    Cancelled
  };

namespace ConfigChangeStatusMapper
{
AWS_OPENSEARCHSERVICE_API ConfigChangeStatus GetConfigChangeStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForConfigChangeStatus(ConfigChangeStatus value);
} // namespace ConfigChangeStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
