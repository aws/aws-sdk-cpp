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
  enum class DomainHealth
  {
    NOT_SET,
    Red,
    Yellow,
    Green,
    NotAvailable
  };

namespace DomainHealthMapper
{
AWS_OPENSEARCHSERVICE_API DomainHealth GetDomainHealthForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDomainHealth(DomainHealth value);
} // namespace DomainHealthMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
