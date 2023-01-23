/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ListStreamingSessionBackupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStreamingSessionBackupsResult::ListStreamingSessionBackupsResult()
{
}

ListStreamingSessionBackupsResult::ListStreamingSessionBackupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStreamingSessionBackupsResult& ListStreamingSessionBackupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("streamingSessionBackups"))
  {
    Aws::Utils::Array<JsonView> streamingSessionBackupsJsonList = jsonValue.GetArray("streamingSessionBackups");
    for(unsigned streamingSessionBackupsIndex = 0; streamingSessionBackupsIndex < streamingSessionBackupsJsonList.GetLength(); ++streamingSessionBackupsIndex)
    {
      m_streamingSessionBackups.push_back(streamingSessionBackupsJsonList[streamingSessionBackupsIndex].AsObject());
    }
  }



  return *this;
}
