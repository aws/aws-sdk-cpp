/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ExecuteOpenCypherExplainQueryResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

ExecuteOpenCypherExplainQueryResult::ExecuteOpenCypherExplainQueryResult()
{
}

ExecuteOpenCypherExplainQueryResult::ExecuteOpenCypherExplainQueryResult(ExecuteOpenCypherExplainQueryResult&& toMove) : 
    m_results(std::move(toMove.m_results)),
    m_requestId(std::move(toMove.m_requestId))
{
}

ExecuteOpenCypherExplainQueryResult& ExecuteOpenCypherExplainQueryResult::operator=(ExecuteOpenCypherExplainQueryResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_results = std::move(toMove.m_results);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

ExecuteOpenCypherExplainQueryResult::ExecuteOpenCypherExplainQueryResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

ExecuteOpenCypherExplainQueryResult& ExecuteOpenCypherExplainQueryResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_results = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
