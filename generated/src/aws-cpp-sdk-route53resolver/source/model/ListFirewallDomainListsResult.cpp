/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListFirewallDomainListsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFirewallDomainListsResult::ListFirewallDomainListsResult()
{
}

ListFirewallDomainListsResult::ListFirewallDomainListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFirewallDomainListsResult& ListFirewallDomainListsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FirewallDomainLists"))
  {
    Aws::Utils::Array<JsonView> firewallDomainListsJsonList = jsonValue.GetArray("FirewallDomainLists");
    for(unsigned firewallDomainListsIndex = 0; firewallDomainListsIndex < firewallDomainListsJsonList.GetLength(); ++firewallDomainListsIndex)
    {
      m_firewallDomainLists.push_back(firewallDomainListsJsonList[firewallDomainListsIndex].AsObject());
    }
  }



  return *this;
}
