/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolNetworkPackageDescriptorResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetSolNetworkPackageDescriptorResult::GetSolNetworkPackageDescriptorResult() : 
    m_contentType(DescriptorContentType::NOT_SET)
{
}

GetSolNetworkPackageDescriptorResult::GetSolNetworkPackageDescriptorResult(GetSolNetworkPackageDescriptorResult&& toMove) : 
    m_contentType(toMove.m_contentType),
    m_nsd(std::move(toMove.m_nsd)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetSolNetworkPackageDescriptorResult& GetSolNetworkPackageDescriptorResult::operator=(GetSolNetworkPackageDescriptorResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_contentType = toMove.m_contentType;
   m_nsd = std::move(toMove.m_nsd);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetSolNetworkPackageDescriptorResult::GetSolNetworkPackageDescriptorResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_contentType(DescriptorContentType::NOT_SET)
{
  *this = std::move(result);
}

GetSolNetworkPackageDescriptorResult& GetSolNetworkPackageDescriptorResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_nsd = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = DescriptorContentTypeMapper::GetDescriptorContentTypeForName(contentTypeIter->second);
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
