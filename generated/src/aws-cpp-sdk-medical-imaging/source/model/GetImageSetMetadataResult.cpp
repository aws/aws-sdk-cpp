/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/GetImageSetMetadataResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetImageSetMetadataResult::GetImageSetMetadataResult()
{
}

GetImageSetMetadataResult::GetImageSetMetadataResult(GetImageSetMetadataResult&& toMove) : 
    m_imageSetMetadataBlob(std::move(toMove.m_imageSetMetadataBlob)),
    m_contentType(std::move(toMove.m_contentType)),
    m_contentEncoding(std::move(toMove.m_contentEncoding)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetImageSetMetadataResult& GetImageSetMetadataResult::operator=(GetImageSetMetadataResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_imageSetMetadataBlob = std::move(toMove.m_imageSetMetadataBlob);
   m_contentType = std::move(toMove.m_contentType);
   m_contentEncoding = std::move(toMove.m_contentEncoding);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetImageSetMetadataResult::GetImageSetMetadataResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetImageSetMetadataResult& GetImageSetMetadataResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_imageSetMetadataBlob = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& contentEncodingIter = headers.find("content-encoding");
  if(contentEncodingIter != headers.end())
  {
    m_contentEncoding = contentEncodingIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
