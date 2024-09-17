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
  enum class NaturalLanguageQueryGenerationCurrentState
  {
    NOT_SET,
    NOT_ENABLED,
    ENABLE_COMPLETE,
    ENABLE_IN_PROGRESS,
    ENABLE_FAILED,
    DISABLE_COMPLETE,
    DISABLE_IN_PROGRESS,
    DISABLE_FAILED
  };

namespace NaturalLanguageQueryGenerationCurrentStateMapper
{
AWS_OPENSEARCHSERVICE_API NaturalLanguageQueryGenerationCurrentState GetNaturalLanguageQueryGenerationCurrentStateForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForNaturalLanguageQueryGenerationCurrentState(NaturalLanguageQueryGenerationCurrentState value);
} // namespace NaturalLanguageQueryGenerationCurrentStateMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
