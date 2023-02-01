/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ExportVectorEnrichmentJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExportVectorEnrichmentJobResult::ExportVectorEnrichmentJobResult() : 
    m_exportStatus(VectorEnrichmentJobExportStatus::NOT_SET)
{
}

ExportVectorEnrichmentJobResult::ExportVectorEnrichmentJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_exportStatus(VectorEnrichmentJobExportStatus::NOT_SET)
{
  *this = result;
}

ExportVectorEnrichmentJobResult& ExportVectorEnrichmentJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("ExecutionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");

  }

  if(jsonValue.ValueExists("ExportStatus"))
  {
    m_exportStatus = VectorEnrichmentJobExportStatusMapper::GetVectorEnrichmentJobExportStatusForName(jsonValue.GetString("ExportStatus"));

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }



  return *this;
}
