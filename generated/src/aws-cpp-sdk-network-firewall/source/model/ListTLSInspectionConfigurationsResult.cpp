/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ListTLSInspectionConfigurationsResult.h>
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

ListTLSInspectionConfigurationsResult::ListTLSInspectionConfigurationsResult()
{
}

ListTLSInspectionConfigurationsResult::ListTLSInspectionConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTLSInspectionConfigurationsResult& ListTLSInspectionConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TLSInspectionConfigurations"))
  {
    Aws::Utils::Array<JsonView> tLSInspectionConfigurationsJsonList = jsonValue.GetArray("TLSInspectionConfigurations");
    for(unsigned tLSInspectionConfigurationsIndex = 0; tLSInspectionConfigurationsIndex < tLSInspectionConfigurationsJsonList.GetLength(); ++tLSInspectionConfigurationsIndex)
    {
      m_tLSInspectionConfigurations.push_back(tLSInspectionConfigurationsJsonList[tLSInspectionConfigurationsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
