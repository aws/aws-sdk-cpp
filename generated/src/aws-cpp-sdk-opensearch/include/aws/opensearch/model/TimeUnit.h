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
  enum class TimeUnit
  {
    NOT_SET,
    HOURS
  };

namespace TimeUnitMapper
{
AWS_OPENSEARCHSERVICE_API TimeUnit GetTimeUnitForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForTimeUnit(TimeUnit value);
} // namespace TimeUnitMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
