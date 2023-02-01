/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReferenceResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetReferenceResult::GetReferenceResult()
{
}

GetReferenceResult::GetReferenceResult(GetReferenceResult&& toMove) : 
    m_payload(std::move(toMove.m_payload))
{
}

GetReferenceResult& GetReferenceResult::operator=(GetReferenceResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_payload = std::move(toMove.m_payload);

   return *this;
}

GetReferenceResult::GetReferenceResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetReferenceResult& GetReferenceResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_payload = result.TakeOwnershipOfPayload();

   return *this;
}
