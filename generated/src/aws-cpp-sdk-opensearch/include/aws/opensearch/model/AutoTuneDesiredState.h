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
  enum class AutoTuneDesiredState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AutoTuneDesiredStateMapper
{
AWS_OPENSEARCHSERVICE_API AutoTuneDesiredState GetAutoTuneDesiredStateForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForAutoTuneDesiredState(AutoTuneDesiredState value);
} // namespace AutoTuneDesiredStateMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
