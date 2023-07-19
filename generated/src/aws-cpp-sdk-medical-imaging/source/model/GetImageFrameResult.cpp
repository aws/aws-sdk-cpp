/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/GetImageFrameResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetImageFrameResult::GetImageFrameResult()
{
}

GetImageFrameResult::GetImageFrameResult(GetImageFrameResult&& toMove) : 
    m_imageFrameBlob(std::move(toMove.m_imageFrameBlob)),
    m_contentType(std::move(toMove.m_contentType)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetImageFrameResult& GetImageFrameResult::operator=(GetImageFrameResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_imageFrameBlob = std::move(toMove.m_imageFrameBlob);
   m_contentType = std::move(toMove.m_contentType);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetImageFrameResult::GetImageFrameResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetImageFrameResult& GetImageFrameResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_imageFrameBlob = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
