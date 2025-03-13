/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/UpdateFirewallAnalysisSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateFirewallAnalysisSettingsResult::UpdateFirewallAnalysisSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateFirewallAnalysisSettingsResult& UpdateFirewallAnalysisSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EnabledAnalysisTypes"))
  {
    Aws::Utils::Array<JsonView> enabledAnalysisTypesJsonList = jsonValue.GetArray("EnabledAnalysisTypes");
    for(unsigned enabledAnalysisTypesIndex = 0; enabledAnalysisTypesIndex < enabledAnalysisTypesJsonList.GetLength(); ++enabledAnalysisTypesIndex)
    {
      m_enabledAnalysisTypes.push_back(EnabledAnalysisTypeMapper::GetEnabledAnalysisTypeForName(enabledAnalysisTypesJsonList[enabledAnalysisTypesIndex].AsString()));
    }
    m_enabledAnalysisTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");
    m_firewallArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirewallName"))
  {
    m_firewallName = jsonValue.GetString("FirewallName");
    m_firewallNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateToken"))
  {
    m_updateToken = jsonValue.GetString("UpdateToken");
    m_updateTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
