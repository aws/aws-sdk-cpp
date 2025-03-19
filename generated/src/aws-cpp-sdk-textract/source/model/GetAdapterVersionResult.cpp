/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/GetAdapterVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Textract::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAdapterVersionResult::GetAdapterVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAdapterVersionResult& GetAdapterVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdapterId"))
  {
    m_adapterId = jsonValue.GetString("AdapterId");
    m_adapterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdapterVersion"))
  {
    m_adapterVersion = jsonValue.GetString("AdapterVersion");
    m_adapterVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeatureTypes"))
  {
    Aws::Utils::Array<JsonView> featureTypesJsonList = jsonValue.GetArray("FeatureTypes");
    for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
    {
      m_featureTypes.push_back(FeatureTypeMapper::GetFeatureTypeForName(featureTypesJsonList[featureTypesIndex].AsString()));
    }
    m_featureTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = AdapterVersionStatusMapper::GetAdapterVersionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetConfig"))
  {
    m_datasetConfig = jsonValue.GetObject("DatasetConfig");
    m_datasetConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KMSKeyId"))
  {
    m_kMSKeyId = jsonValue.GetString("KMSKeyId");
    m_kMSKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationMetrics"))
  {
    Aws::Utils::Array<JsonView> evaluationMetricsJsonList = jsonValue.GetArray("EvaluationMetrics");
    for(unsigned evaluationMetricsIndex = 0; evaluationMetricsIndex < evaluationMetricsJsonList.GetLength(); ++evaluationMetricsIndex)
    {
      m_evaluationMetrics.push_back(evaluationMetricsJsonList[evaluationMetricsIndex].AsObject());
    }
    m_evaluationMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
