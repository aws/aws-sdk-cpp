/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/BatchDeleteRumMetricDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteRumMetricDefinitionsResult::BatchDeleteRumMetricDefinitionsResult()
{
}

BatchDeleteRumMetricDefinitionsResult::BatchDeleteRumMetricDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteRumMetricDefinitionsResult& BatchDeleteRumMetricDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("MetricDefinitionIds"))
  {
    Aws::Utils::Array<JsonView> metricDefinitionIdsJsonList = jsonValue.GetArray("MetricDefinitionIds");
    for(unsigned metricDefinitionIdsIndex = 0; metricDefinitionIdsIndex < metricDefinitionIdsJsonList.GetLength(); ++metricDefinitionIdsIndex)
    {
      m_metricDefinitionIds.push_back(metricDefinitionIdsJsonList[metricDefinitionIdsIndex].AsString());
    }
  }



  return *this;
}
