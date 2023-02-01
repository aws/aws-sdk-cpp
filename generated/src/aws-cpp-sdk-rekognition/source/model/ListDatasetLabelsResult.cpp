/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ListDatasetLabelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatasetLabelsResult::ListDatasetLabelsResult()
{
}

ListDatasetLabelsResult::ListDatasetLabelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatasetLabelsResult& ListDatasetLabelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatasetLabelDescriptions"))
  {
    Aws::Utils::Array<JsonView> datasetLabelDescriptionsJsonList = jsonValue.GetArray("DatasetLabelDescriptions");
    for(unsigned datasetLabelDescriptionsIndex = 0; datasetLabelDescriptionsIndex < datasetLabelDescriptionsJsonList.GetLength(); ++datasetLabelDescriptionsIndex)
    {
      m_datasetLabelDescriptions.push_back(datasetLabelDescriptionsJsonList[datasetLabelDescriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
