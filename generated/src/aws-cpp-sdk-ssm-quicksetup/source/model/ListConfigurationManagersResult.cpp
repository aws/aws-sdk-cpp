/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/ListConfigurationManagersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMQuickSetup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConfigurationManagersResult::ListConfigurationManagersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConfigurationManagersResult& ListConfigurationManagersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationManagersList"))
  {
    Aws::Utils::Array<JsonView> configurationManagersListJsonList = jsonValue.GetArray("ConfigurationManagersList");
    for(unsigned configurationManagersListIndex = 0; configurationManagersListIndex < configurationManagersListJsonList.GetLength(); ++configurationManagersListIndex)
    {
      m_configurationManagersList.push_back(configurationManagersListJsonList[configurationManagersListIndex].AsObject());
    }
    m_configurationManagersListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
