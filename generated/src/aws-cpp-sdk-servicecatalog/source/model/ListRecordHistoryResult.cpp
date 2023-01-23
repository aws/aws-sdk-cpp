/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListRecordHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecordHistoryResult::ListRecordHistoryResult()
{
}

ListRecordHistoryResult::ListRecordHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRecordHistoryResult& ListRecordHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecordDetails"))
  {
    Aws::Utils::Array<JsonView> recordDetailsJsonList = jsonValue.GetArray("RecordDetails");
    for(unsigned recordDetailsIndex = 0; recordDetailsIndex < recordDetailsJsonList.GetLength(); ++recordDetailsIndex)
    {
      m_recordDetails.push_back(recordDetailsJsonList[recordDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
