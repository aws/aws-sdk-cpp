/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/GetSolFunctionPackageContentResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::tnb::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetSolFunctionPackageContentResult::GetSolFunctionPackageContentResult() : 
    m_contentType(PackageContentType::NOT_SET)
{
}

GetSolFunctionPackageContentResult::GetSolFunctionPackageContentResult(GetSolFunctionPackageContentResult&& toMove) : 
    m_contentType(toMove.m_contentType),
    m_packageContent(std::move(toMove.m_packageContent)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetSolFunctionPackageContentResult& GetSolFunctionPackageContentResult::operator=(GetSolFunctionPackageContentResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_contentType = toMove.m_contentType;
   m_packageContent = std::move(toMove.m_packageContent);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetSolFunctionPackageContentResult::GetSolFunctionPackageContentResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_contentType(PackageContentType::NOT_SET)
{
  *this = std::move(result);
}

GetSolFunctionPackageContentResult& GetSolFunctionPackageContentResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_packageContent = result.TakeOwnershipOfPayload();

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
