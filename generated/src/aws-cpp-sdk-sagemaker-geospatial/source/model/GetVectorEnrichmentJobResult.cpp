/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/GetVectorEnrichmentJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetVectorEnrichmentJobResult::GetVectorEnrichmentJobResult() : 
    m_durationInSeconds(0),
    m_exportStatus(VectorEnrichmentJobExportStatus::NOT_SET),
    m_status(VectorEnrichmentJobStatus::NOT_SET),
    m_type(VectorEnrichmentJobType::NOT_SET)
{
}

GetVectorEnrichmentJobResult::GetVectorEnrichmentJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_durationInSeconds(0),
    m_exportStatus(VectorEnrichmentJobExportStatus::NOT_SET),
    m_status(VectorEnrichmentJobStatus::NOT_SET),
    m_type(VectorEnrichmentJobType::NOT_SET)
{
  *this = result;
}

GetVectorEnrichmentJobResult& GetVectorEnrichmentJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");

  }

  if(jsonValue.ValueExists("ErrorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("ErrorDetails");

  }

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

  }

  if(jsonValue.ValueExists("ExportErrorDetails"))
  {
    m_exportErrorDetails = jsonValue.GetObject("ExportErrorDetails");

  }

  if(jsonValue.ValueExists("ExportStatus"))
  {
    m_exportStatus = VectorEnrichmentJobExportStatusMapper::GetVectorEnrichmentJobExportStatusForName(jsonValue.GetString("ExportStatus"));

  }

  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");

  }

  if(jsonValue.ValueExists("JobConfig"))
  {
    m_jobConfig = jsonValue.GetObject("JobConfig");

  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = VectorEnrichmentJobStatusMapper::GetVectorEnrichmentJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = VectorEnrichmentJobTypeMapper::GetVectorEnrichmentJobTypeForName(jsonValue.GetString("Type"));

  }



  return *this;
}
