/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/SendCommandResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QLDBSession::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendCommandResult::SendCommandResult()
{
}

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

  }

  if(jsonValue.ValueExists("StartTransaction"))
  {
    m_startTransaction = jsonValue.GetObject("StartTransaction");

  }

  if(jsonValue.ValueExists("EndSession"))
  {
    m_endSession = jsonValue.GetObject("EndSession");

  }

  if(jsonValue.ValueExists("CommitTransaction"))
  {
    m_commitTransaction = jsonValue.GetObject("CommitTransaction");

  }

  if(jsonValue.ValueExists("AbortTransaction"))
  {
    m_abortTransaction = jsonValue.GetObject("AbortTransaction");

  }

  if(jsonValue.ValueExists("ExecuteStatement"))
  {
    m_executeStatement = jsonValue.GetObject("ExecuteStatement");

  }

  if(jsonValue.ValueExists("FetchPage"))
  {
    m_fetchPage = jsonValue.GetObject("FetchPage");

  }



  return *this;
}
