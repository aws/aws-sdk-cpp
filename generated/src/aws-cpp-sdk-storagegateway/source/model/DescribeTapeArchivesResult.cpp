/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeTapeArchivesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTapeArchivesResult::DescribeTapeArchivesResult()
{
}

DescribeTapeArchivesResult::DescribeTapeArchivesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTapeArchivesResult& DescribeTapeArchivesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TapeArchives"))
  {
    Aws::Utils::Array<JsonView> tapeArchivesJsonList = jsonValue.GetArray("TapeArchives");
    for(unsigned tapeArchivesIndex = 0; tapeArchivesIndex < tapeArchivesJsonList.GetLength(); ++tapeArchivesIndex)
    {
      m_tapeArchives.push_back(tapeArchivesJsonList[tapeArchivesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
