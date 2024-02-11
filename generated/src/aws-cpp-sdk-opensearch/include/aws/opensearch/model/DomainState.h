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
  enum class DomainState
  {
    NOT_SET,
    Active,
    Processing,
    NotAvailable
  };

namespace DomainStateMapper
{
AWS_OPENSEARCHSERVICE_API DomainState GetDomainStateForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDomainState(DomainState value);
} // namespace DomainStateMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
