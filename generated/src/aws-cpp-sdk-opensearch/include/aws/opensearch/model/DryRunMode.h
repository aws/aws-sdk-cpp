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
  enum class DryRunMode
  {
    NOT_SET,
    Basic,
    Verbose
  };

namespace DryRunModeMapper
{
AWS_OPENSEARCHSERVICE_API DryRunMode GetDryRunModeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDryRunMode(DryRunMode value);
} // namespace DryRunModeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
