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
  enum class ActionSeverity
  {
    NOT_SET,
    HIGH,
    MEDIUM,
    LOW
  };

namespace ActionSeverityMapper
{
AWS_OPENSEARCHSERVICE_API ActionSeverity GetActionSeverityForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForActionSeverity(ActionSeverity value);
} // namespace ActionSeverityMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
