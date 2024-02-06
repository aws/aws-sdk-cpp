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
  enum class InitiatedBy
  {
    NOT_SET,
    CUSTOMER,
    SERVICE
  };

namespace InitiatedByMapper
{
AWS_OPENSEARCHSERVICE_API InitiatedBy GetInitiatedByForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForInitiatedBy(InitiatedBy value);
} // namespace InitiatedByMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
