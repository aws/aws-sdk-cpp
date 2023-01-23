/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/BatchUpdateClusterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchUpdateClusterResult::BatchUpdateClusterResult()
{
}

BatchUpdateClusterResult::BatchUpdateClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchUpdateClusterResult& BatchUpdateClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProcessedClusters"))
  {
    Aws::Utils::Array<JsonView> processedClustersJsonList = jsonValue.GetArray("ProcessedClusters");
    for(unsigned processedClustersIndex = 0; processedClustersIndex < processedClustersJsonList.GetLength(); ++processedClustersIndex)
    {
      m_processedClusters.push_back(processedClustersJsonList[processedClustersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedClusters"))
  {
    Aws::Utils::Array<JsonView> unprocessedClustersJsonList = jsonValue.GetArray("UnprocessedClusters");
    for(unsigned unprocessedClustersIndex = 0; unprocessedClustersIndex < unprocessedClustersJsonList.GetLength(); ++unprocessedClustersIndex)
    {
      m_unprocessedClusters.push_back(unprocessedClustersJsonList[unprocessedClustersIndex].AsObject());
    }
  }



  return *this;
}
