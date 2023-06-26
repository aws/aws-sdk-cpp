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
  enum class SkipUnavailableStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace SkipUnavailableStatusMapper
{
AWS_OPENSEARCHSERVICE_API SkipUnavailableStatus GetSkipUnavailableStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForSkipUnavailableStatus(SkipUnavailableStatus value);
} // namespace SkipUnavailableStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
