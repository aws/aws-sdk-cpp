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
  enum class LogType
  {
    NOT_SET,
    INDEX_SLOW_LOGS,
    SEARCH_SLOW_LOGS,
    ES_APPLICATION_LOGS,
    AUDIT_LOGS
  };

namespace LogTypeMapper
{
AWS_OPENSEARCHSERVICE_API LogType GetLogTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForLogType(LogType value);
} // namespace LogTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
