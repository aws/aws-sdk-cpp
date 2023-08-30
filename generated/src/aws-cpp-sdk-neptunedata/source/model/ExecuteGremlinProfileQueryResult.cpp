/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/ExecuteGremlinProfileQueryResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

ExecuteGremlinProfileQueryResult::ExecuteGremlinProfileQueryResult()
{
}

ExecuteGremlinProfileQueryResult::ExecuteGremlinProfileQueryResult(ExecuteGremlinProfileQueryResult&& toMove) : 
    m_output(std::move(toMove.m_output)),
    m_requestId(std::move(toMove.m_requestId))
{
}

ExecuteGremlinProfileQueryResult& ExecuteGremlinProfileQueryResult::operator=(ExecuteGremlinProfileQueryResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_output = std::move(toMove.m_output);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

ExecuteGremlinProfileQueryResult::ExecuteGremlinProfileQueryResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

ExecuteGremlinProfileQueryResult& ExecuteGremlinProfileQueryResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_output = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
