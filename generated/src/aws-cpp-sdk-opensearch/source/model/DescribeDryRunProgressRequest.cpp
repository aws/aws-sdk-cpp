/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DescribeDryRunProgressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeDryRunProgressRequest::DescribeDryRunProgressRequest() : 
    m_domainNameHasBeenSet(false),
    m_dryRunIdHasBeenSet(false),
    m_loadDryRunConfig(false),
    m_loadDryRunConfigHasBeenSet(false)
{
}

Aws::String DescribeDryRunProgressRequest::SerializePayload() const
{
  return {};
}

void DescribeDryRunProgressRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_dryRunIdHasBeenSet)
    {
      ss << m_dryRunId;
      uri.AddQueryStringParameter("dryRunId", ss.str());
      ss.str("");
    }

    if(m_loadDryRunConfigHasBeenSet)
    {
      ss << m_loadDryRunConfig;
      uri.AddQueryStringParameter("loadDryRunConfig", ss.str());
      ss.str("");
    }

}



