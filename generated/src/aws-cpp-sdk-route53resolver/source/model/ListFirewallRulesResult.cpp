/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListFirewallRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFirewallRulesResult::ListFirewallRulesResult()
{
}

ListFirewallRulesResult::ListFirewallRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFirewallRulesResult& ListFirewallRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FirewallRules"))
  {
    Aws::Utils::Array<JsonView> firewallRulesJsonList = jsonValue.GetArray("FirewallRules");
    for(unsigned firewallRulesIndex = 0; firewallRulesIndex < firewallRulesJsonList.GetLength(); ++firewallRulesIndex)
    {
      m_firewallRules.push_back(firewallRulesJsonList[firewallRulesIndex].AsObject());
    }
  }



  return *this;
}
