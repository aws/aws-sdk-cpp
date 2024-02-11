/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/SearchImageSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MedicalImaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchImageSetsResult::SearchImageSetsResult()
{
}

SearchImageSetsResult::SearchImageSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchImageSetsResult& SearchImageSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("imageSetsMetadataSummaries"))
  {
    Aws::Utils::Array<JsonView> imageSetsMetadataSummariesJsonList = jsonValue.GetArray("imageSetsMetadataSummaries");
    for(unsigned imageSetsMetadataSummariesIndex = 0; imageSetsMetadataSummariesIndex < imageSetsMetadataSummariesJsonList.GetLength(); ++imageSetsMetadataSummariesIndex)
    {
      m_imageSetsMetadataSummaries.push_back(imageSetsMetadataSummariesJsonList[imageSetsMetadataSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
