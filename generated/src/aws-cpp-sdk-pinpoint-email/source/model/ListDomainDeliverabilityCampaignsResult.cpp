/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDomainDeliverabilityCampaignsResult::ListDomainDeliverabilityCampaignsResult()
{
}

ListDomainDeliverabilityCampaignsResult::ListDomainDeliverabilityCampaignsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDomainDeliverabilityCampaignsResult& ListDomainDeliverabilityCampaignsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainDeliverabilityCampaigns"))
  {
    Aws::Utils::Array<JsonView> domainDeliverabilityCampaignsJsonList = jsonValue.GetArray("DomainDeliverabilityCampaigns");
    for(unsigned domainDeliverabilityCampaignsIndex = 0; domainDeliverabilityCampaignsIndex < domainDeliverabilityCampaignsJsonList.GetLength(); ++domainDeliverabilityCampaignsIndex)
    {
      m_domainDeliverabilityCampaigns.push_back(domainDeliverabilityCampaignsJsonList[domainDeliverabilityCampaignsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
