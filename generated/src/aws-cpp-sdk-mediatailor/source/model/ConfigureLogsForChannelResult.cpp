/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ConfigureLogsForChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ConfigureLogsForChannelResult::ConfigureLogsForChannelResult()
{
}

ConfigureLogsForChannelResult::ConfigureLogsForChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ConfigureLogsForChannelResult& ConfigureLogsForChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

  }

  if(jsonValue.ValueExists("LogTypes"))
  {
    Aws::Utils::Array<JsonView> logTypesJsonList = jsonValue.GetArray("LogTypes");
    for(unsigned logTypesIndex = 0; logTypesIndex < logTypesJsonList.GetLength(); ++logTypesIndex)
    {
      m_logTypes.push_back(LogTypeMapper::GetLogTypeForName(logTypesJsonList[logTypesIndex].AsString()));
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
