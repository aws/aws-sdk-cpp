/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/GetCodeBindingSourceResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetCodeBindingSourceResult::GetCodeBindingSourceResult()
{
}

GetCodeBindingSourceResult::GetCodeBindingSourceResult(GetCodeBindingSourceResult&& toMove) : 
    m_body(std::move(toMove.m_body)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetCodeBindingSourceResult& GetCodeBindingSourceResult::operator=(GetCodeBindingSourceResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_body = std::move(toMove.m_body);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetCodeBindingSourceResult::GetCodeBindingSourceResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetCodeBindingSourceResult& GetCodeBindingSourceResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_body = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
