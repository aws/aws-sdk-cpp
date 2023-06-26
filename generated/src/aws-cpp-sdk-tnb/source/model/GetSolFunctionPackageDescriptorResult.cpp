/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolFunctionPackageDescriptorResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetSolFunctionPackageDescriptorResult::GetSolFunctionPackageDescriptorResult() : 
    m_contentType(DescriptorContentType::NOT_SET)
{
}

GetSolFunctionPackageDescriptorResult::GetSolFunctionPackageDescriptorResult(GetSolFunctionPackageDescriptorResult&& toMove) : 
    m_contentType(toMove.m_contentType),
    m_vnfd(std::move(toMove.m_vnfd)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetSolFunctionPackageDescriptorResult& GetSolFunctionPackageDescriptorResult::operator=(GetSolFunctionPackageDescriptorResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_contentType = toMove.m_contentType;
   m_vnfd = std::move(toMove.m_vnfd);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetSolFunctionPackageDescriptorResult::GetSolFunctionPackageDescriptorResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_contentType(DescriptorContentType::NOT_SET)
{
  *this = std::move(result);
}

GetSolFunctionPackageDescriptorResult& GetSolFunctionPackageDescriptorResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_vnfd = result.TakeOwnershipOfPayload();

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
