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

GetAdapterVersionResult::GetAdapterVersionResult() : 
    m_status(AdapterVersionStatus::NOT_SET)
{
}

GetAdapterVersionResult::GetAdapterVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AdapterVersionStatus::NOT_SET)
{
  *this = result;
}

GetAdapterVersionResult& GetAdapterVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdapterId"))
  {
    m_adapterId = jsonValue.GetString("AdapterId");

  }

  if(jsonValue.ValueExists("AdapterVersion"))
  {
    m_adapterVersion = jsonValue.GetString("AdapterVersion");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("FeatureTypes"))
  {
    Aws::Utils::Array<JsonView> featureTypesJsonList = jsonValue.GetArray("FeatureTypes");
    for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
    {
      m_featureTypes.push_back(FeatureTypeMapper::GetFeatureTypeForName(featureTypesJsonList[featureTypesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AdapterVersionStatusMapper::GetAdapterVersionStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("DatasetConfig"))
  {
    m_datasetConfig = jsonValue.GetObject("DatasetConfig");

  }

  if(jsonValue.ValueExists("KMSKeyId"))
  {
    m_kMSKeyId = jsonValue.GetString("KMSKeyId");

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }

  if(jsonValue.ValueExists("EvaluationMetrics"))
  {
    Aws::Utils::Array<JsonView> evaluationMetricsJsonList = jsonValue.GetArray("EvaluationMetrics");
    for(unsigned evaluationMetricsIndex = 0; evaluationMetricsIndex < evaluationMetricsJsonList.GetLength(); ++evaluationMetricsIndex)
    {
      m_evaluationMetrics.push_back(evaluationMetricsJsonList[evaluationMetricsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
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
