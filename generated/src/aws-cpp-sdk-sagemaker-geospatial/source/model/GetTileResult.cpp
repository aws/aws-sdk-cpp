/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/GetTileResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetTileResult::GetTileResult()
{
}

GetTileResult::GetTileResult(GetTileResult&& toMove) : 
    m_binaryFile(std::move(toMove.m_binaryFile))
{
}

GetTileResult& GetTileResult::operator=(GetTileResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_binaryFile = std::move(toMove.m_binaryFile);

   return *this;
}

GetTileResult::GetTileResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetTileResult& GetTileResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_binaryFile = result.TakeOwnershipOfPayload();

   return *this;
}
