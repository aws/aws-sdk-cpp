/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/UpdateFirewallEncryptionConfigurationResult.h>
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

UpdateFirewallEncryptionConfigurationResult::UpdateFirewallEncryptionConfigurationResult()
{
}

UpdateFirewallEncryptionConfigurationResult::UpdateFirewallEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateFirewallEncryptionConfigurationResult& UpdateFirewallEncryptionConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FirewallArn"))
  {
    m_firewallArn = jsonValue.GetString("FirewallArn");

  }

  if(jsonValue.ValueExists("FirewallName"))
  {
    m_firewallName = jsonValue.GetString("FirewallName");

  }

  if(jsonValue.ValueExists("UpdateToken"))
  {
    m_updateToken = jsonValue.GetString("UpdateToken");

  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
