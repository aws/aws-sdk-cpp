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
  enum class NaturalLanguageQueryGenerationDesiredState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace NaturalLanguageQueryGenerationDesiredStateMapper
{
AWS_OPENSEARCHSERVICE_API NaturalLanguageQueryGenerationDesiredState GetNaturalLanguageQueryGenerationDesiredStateForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForNaturalLanguageQueryGenerationDesiredState(NaturalLanguageQueryGenerationDesiredState value);
} // namespace NaturalLanguageQueryGenerationDesiredStateMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
