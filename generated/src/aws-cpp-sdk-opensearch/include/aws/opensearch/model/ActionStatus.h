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
  enum class ActionStatus
  {
    NOT_SET,
    PENDING_UPDATE,
    IN_PROGRESS,
    FAILED,
    COMPLETED,
    NOT_ELIGIBLE,
    ELIGIBLE
  };

namespace ActionStatusMapper
{
AWS_OPENSEARCHSERVICE_API ActionStatus GetActionStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForActionStatus(ActionStatus value);
} // namespace ActionStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
