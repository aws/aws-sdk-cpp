/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListAnnotationStoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnnotationStoresResult::ListAnnotationStoresResult()
{
}

ListAnnotationStoresResult::ListAnnotationStoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnnotationStoresResult& ListAnnotationStoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("annotationStores"))
  {
    Aws::Utils::Array<JsonView> annotationStoresJsonList = jsonValue.GetArray("annotationStores");
    for(unsigned annotationStoresIndex = 0; annotationStoresIndex < annotationStoresJsonList.GetLength(); ++annotationStoresIndex)
    {
      m_annotationStores.push_back(annotationStoresJsonList[annotationStoresIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
