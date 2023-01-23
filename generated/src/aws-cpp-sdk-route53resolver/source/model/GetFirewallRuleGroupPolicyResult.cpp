/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/GetFirewallRuleGroupPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFirewallRuleGroupPolicyResult::GetFirewallRuleGroupPolicyResult()
{
}

GetFirewallRuleGroupPolicyResult::GetFirewallRuleGroupPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFirewallRuleGroupPolicyResult& GetFirewallRuleGroupPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FirewallRuleGroupPolicy"))
  {
    m_firewallRuleGroupPolicy = jsonValue.GetString("FirewallRuleGroupPolicy");

  }



  return *this;
}
