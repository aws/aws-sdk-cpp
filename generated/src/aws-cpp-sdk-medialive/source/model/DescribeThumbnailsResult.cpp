/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeThumbnailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeThumbnailsResult::DescribeThumbnailsResult()
{
}

DescribeThumbnailsResult::DescribeThumbnailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeThumbnailsResult& DescribeThumbnailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("thumbnailDetails"))
  {
    Aws::Utils::Array<JsonView> thumbnailDetailsJsonList = jsonValue.GetArray("thumbnailDetails");
    for(unsigned thumbnailDetailsIndex = 0; thumbnailDetailsIndex < thumbnailDetailsJsonList.GetLength(); ++thumbnailDetailsIndex)
    {
      m_thumbnailDetails.push_back(thumbnailDetailsJsonList[thumbnailDetailsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
