/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/SendCommandResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QLDBSession::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendCommandResult::SendCommandResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SendCommandResult& SendCommandResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StartSession"))
  {
    m_startSession = jsonValue.GetObject("StartSession");
    m_startSessionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTransaction"))
  {
    m_startTransaction = jsonValue.GetObject("StartTransaction");
    m_startTransactionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndSession"))
  {
    m_endSession = jsonValue.GetObject("EndSession");
    m_endSessionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CommitTransaction"))
  {
    m_commitTransaction = jsonValue.GetObject("CommitTransaction");
    m_commitTransactionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AbortTransaction"))
  {
    m_abortTransaction = jsonValue.GetObject("AbortTransaction");
    m_abortTransactionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecuteStatement"))
  {
    m_executeStatement = jsonValue.GetObject("ExecuteStatement");
    m_executeStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FetchPage"))
  {
    m_fetchPage = jsonValue.GetObject("FetchPage");
    m_fetchPageHasBeenSet = true;
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
