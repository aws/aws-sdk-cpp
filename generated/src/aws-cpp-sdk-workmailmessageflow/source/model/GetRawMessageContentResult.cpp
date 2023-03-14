/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/model/GetRawMessageContentResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkMailMessageFlow::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetRawMessageContentResult::GetRawMessageContentResult()
{
}

GetRawMessageContentResult::GetRawMessageContentResult(GetRawMessageContentResult&& toMove) : 
    m_messageContent(std::move(toMove.m_messageContent)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetRawMessageContentResult& GetRawMessageContentResult::operator=(GetRawMessageContentResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_messageContent = std::move(toMove.m_messageContent);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetRawMessageContentResult::GetRawMessageContentResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetRawMessageContentResult& GetRawMessageContentResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_messageContent = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
