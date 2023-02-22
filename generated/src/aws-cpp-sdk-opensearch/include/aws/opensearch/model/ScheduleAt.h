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
  enum class ScheduleAt
  {
    NOT_SET,
    NOW,
    TIMESTAMP,
    OFF_PEAK_WINDOW
  };

namespace ScheduleAtMapper
{
AWS_OPENSEARCHSERVICE_API ScheduleAt GetScheduleAtForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForScheduleAt(ScheduleAt value);
} // namespace ScheduleAtMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
