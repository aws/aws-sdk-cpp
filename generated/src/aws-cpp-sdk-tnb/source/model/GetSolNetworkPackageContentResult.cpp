/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkPackageContentResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetSolNetworkPackageContentResult::GetSolNetworkPackageContentResult() : 
    m_contentType(PackageContentType::NOT_SET)
{
}

GetSolNetworkPackageContentResult::GetSolNetworkPackageContentResult(GetSolNetworkPackageContentResult&& toMove) : 
    m_contentType(toMove.m_contentType),
    m_nsdContent(std::move(toMove.m_nsdContent)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetSolNetworkPackageContentResult& GetSolNetworkPackageContentResult::operator=(GetSolNetworkPackageContentResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_contentType = toMove.m_contentType;
   m_nsdContent = std::move(toMove.m_nsdContent);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetSolNetworkPackageContentResult::GetSolNetworkPackageContentResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_contentType(PackageContentType::NOT_SET)
{
  *this = std::move(result);
}

GetSolNetworkPackageContentResult& GetSolNetworkPackageContentResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_nsdContent = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = PackageContentTypeMapper::GetPackageContentTypeForName(contentTypeIter->second);
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
