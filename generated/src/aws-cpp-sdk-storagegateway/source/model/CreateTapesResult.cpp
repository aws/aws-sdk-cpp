/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CreateTapesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTapesResult::CreateTapesResult()
{
}

CreateTapesResult::CreateTapesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateTapesResult& CreateTapesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TapeARNs"))
  {
    Aws::Utils::Array<JsonView> tapeARNsJsonList = jsonValue.GetArray("TapeARNs");
    for(unsigned tapeARNsIndex = 0; tapeARNsIndex < tapeARNsJsonList.GetLength(); ++tapeARNsIndex)
    {
      m_tapeARNs.push_back(tapeARNsJsonList[tapeARNsIndex].AsString());
    }
  }



  return *this;
}
