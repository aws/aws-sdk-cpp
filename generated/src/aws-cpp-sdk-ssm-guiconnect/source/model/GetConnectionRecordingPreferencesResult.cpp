/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-guiconnect/model/GetConnectionRecordingPreferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMGuiConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectionRecordingPreferencesResult::GetConnectionRecordingPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConnectionRecordingPreferencesResult& GetConnectionRecordingPreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClientToken"))
  {
    m_clientToken = jsonValue.GetString("ClientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionRecordingPreferences"))
  {
    m_connectionRecordingPreferences = jsonValue.GetObject("ConnectionRecordingPreferences");
    m_connectionRecordingPreferencesHasBeenSet = true;
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
