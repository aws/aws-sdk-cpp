/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ListFirewallRuleGroupAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFirewallRuleGroupAssociationsResult::ListFirewallRuleGroupAssociationsResult()
{
}

ListFirewallRuleGroupAssociationsResult::ListFirewallRuleGroupAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFirewallRuleGroupAssociationsResult& ListFirewallRuleGroupAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FirewallRuleGroupAssociations"))
  {
    Aws::Utils::Array<JsonView> firewallRuleGroupAssociationsJsonList = jsonValue.GetArray("FirewallRuleGroupAssociations");
    for(unsigned firewallRuleGroupAssociationsIndex = 0; firewallRuleGroupAssociationsIndex < firewallRuleGroupAssociationsJsonList.GetLength(); ++firewallRuleGroupAssociationsIndex)
    {
      m_firewallRuleGroupAssociations.push_back(firewallRuleGroupAssociationsJsonList[firewallRuleGroupAssociationsIndex].AsObject());
    }
  }



  return *this;
}
