/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListAnnotationStoreVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnnotationStoreVersionsResult::ListAnnotationStoreVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnnotationStoreVersionsResult& ListAnnotationStoreVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("annotationStoreVersions"))
  {
    Aws::Utils::Array<JsonView> annotationStoreVersionsJsonList = jsonValue.GetArray("annotationStoreVersions");
    for(unsigned annotationStoreVersionsIndex = 0; annotationStoreVersionsIndex < annotationStoreVersionsJsonList.GetLength(); ++annotationStoreVersionsIndex)
    {
      m_annotationStoreVersions.push_back(annotationStoreVersionsJsonList[annotationStoreVersionsIndex].AsObject());
    }
    m_annotationStoreVersionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
