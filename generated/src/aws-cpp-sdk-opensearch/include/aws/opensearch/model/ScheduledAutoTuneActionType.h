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
  enum class ScheduledAutoTuneActionType
  {
    NOT_SET,
    JVM_HEAP_SIZE_TUNING,
    JVM_YOUNG_GEN_TUNING
  };

namespace ScheduledAutoTuneActionTypeMapper
{
AWS_OPENSEARCHSERVICE_API ScheduledAutoTuneActionType GetScheduledAutoTuneActionTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForScheduledAutoTuneActionType(ScheduledAutoTuneActionType value);
} // namespace ScheduledAutoTuneActionTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
