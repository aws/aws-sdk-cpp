/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/GetEarthObservationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEarthObservationJobResult::GetEarthObservationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEarthObservationJobResult& GetEarthObservationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");
    m_durationInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("ErrorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportErrorDetails"))
  {
    m_exportErrorDetails = jsonValue.GetObject("ExportErrorDetails");
    m_exportErrorDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportStatus"))
  {
    m_exportStatus = EarthObservationJobExportStatusMapper::GetEarthObservationJobExportStatusForName(jsonValue.GetString("ExportStatus"));
    m_exportStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");
    m_inputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobConfig"))
  {
    m_jobConfig = jsonValue.GetObject("JobConfig");
    m_jobConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputBands"))
  {
    Aws::Utils::Array<JsonView> outputBandsJsonList = jsonValue.GetArray("OutputBands");
    for(unsigned outputBandsIndex = 0; outputBandsIndex < outputBandsJsonList.GetLength(); ++outputBandsIndex)
    {
      m_outputBands.push_back(outputBandsJsonList[outputBandsIndex].AsObject());
    }
    m_outputBandsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = EarthObservationJobStatusMapper::GetEarthObservationJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
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
