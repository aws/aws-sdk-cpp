/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/ListLedgersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLedgersResult::ListLedgersResult()
{
}

ListLedgersResult::ListLedgersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLedgersResult& ListLedgersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Ledgers"))
  {
    Aws::Utils::Array<JsonView> ledgersJsonList = jsonValue.GetArray("Ledgers");
    for(unsigned ledgersIndex = 0; ledgersIndex < ledgersJsonList.GetLength(); ++ledgersIndex)
    {
      m_ledgers.push_back(ledgersJsonList[ledgersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
