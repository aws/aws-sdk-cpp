/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/QueryLineageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QueryLineageResult::QueryLineageResult()
{
}

QueryLineageResult::QueryLineageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

QueryLineageResult& QueryLineageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Vertices"))
  {
    Aws::Utils::Array<JsonView> verticesJsonList = jsonValue.GetArray("Vertices");
    for(unsigned verticesIndex = 0; verticesIndex < verticesJsonList.GetLength(); ++verticesIndex)
    {
      m_vertices.push_back(verticesJsonList[verticesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Edges"))
  {
    Aws::Utils::Array<JsonView> edgesJsonList = jsonValue.GetArray("Edges");
    for(unsigned edgesIndex = 0; edgesIndex < edgesJsonList.GetLength(); ++edgesIndex)
    {
      m_edges.push_back(edgesJsonList[edgesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
