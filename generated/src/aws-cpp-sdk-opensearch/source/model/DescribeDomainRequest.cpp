/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribeDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDomainRequest::DescribeDomainRequest() : 
    m_domainNameHasBeenSet(false)
{
}

Aws::String DescribeDomainRequest::SerializePayload() const
{
  return {};
}




