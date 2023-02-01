/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ListFirewallPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFirewallPoliciesResult::ListFirewallPoliciesResult()
{
}

ListFirewallPoliciesResult::ListFirewallPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFirewallPoliciesResult& ListFirewallPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FirewallPolicies"))
  {
    Aws::Utils::Array<JsonView> firewallPoliciesJsonList = jsonValue.GetArray("FirewallPolicies");
    for(unsigned firewallPoliciesIndex = 0; firewallPoliciesIndex < firewallPoliciesJsonList.GetLength(); ++firewallPoliciesIndex)
    {
      m_firewallPolicies.push_back(firewallPoliciesJsonList[firewallPoliciesIndex].AsObject());
    }
  }



  return *this;
}
