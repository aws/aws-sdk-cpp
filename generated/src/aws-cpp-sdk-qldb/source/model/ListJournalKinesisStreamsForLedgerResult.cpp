/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/ListJournalKinesisStreamsForLedgerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListJournalKinesisStreamsForLedgerResult::ListJournalKinesisStreamsForLedgerResult()
{
}

ListJournalKinesisStreamsForLedgerResult::ListJournalKinesisStreamsForLedgerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListJournalKinesisStreamsForLedgerResult& ListJournalKinesisStreamsForLedgerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Streams"))
  {
    Aws::Utils::Array<JsonView> streamsJsonList = jsonValue.GetArray("Streams");
    for(unsigned streamsIndex = 0; streamsIndex < streamsJsonList.GetLength(); ++streamsIndex)
    {
      m_streams.push_back(streamsJsonList[streamsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
