/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ListChatResponseConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChatResponseConfigurationsResult::ListChatResponseConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChatResponseConfigurationsResult& ListChatResponseConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("chatResponseConfigurations"))
  {
    Aws::Utils::Array<JsonView> chatResponseConfigurationsJsonList = jsonValue.GetArray("chatResponseConfigurations");
    for(unsigned chatResponseConfigurationsIndex = 0; chatResponseConfigurationsIndex < chatResponseConfigurationsJsonList.GetLength(); ++chatResponseConfigurationsIndex)
    {
      m_chatResponseConfigurations.push_back(chatResponseConfigurationsJsonList[chatResponseConfigurationsIndex].AsObject());
    }
    m_chatResponseConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
