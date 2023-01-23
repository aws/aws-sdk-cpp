/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/ListJournalS3ExportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListJournalS3ExportsResult::ListJournalS3ExportsResult()
{
}

ListJournalS3ExportsResult::ListJournalS3ExportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListJournalS3ExportsResult& ListJournalS3ExportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JournalS3Exports"))
  {
    Aws::Utils::Array<JsonView> journalS3ExportsJsonList = jsonValue.GetArray("JournalS3Exports");
    for(unsigned journalS3ExportsIndex = 0; journalS3ExportsIndex < journalS3ExportsJsonList.GetLength(); ++journalS3ExportsIndex)
    {
      m_journalS3Exports.push_back(journalS3ExportsJsonList[journalS3ExportsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
