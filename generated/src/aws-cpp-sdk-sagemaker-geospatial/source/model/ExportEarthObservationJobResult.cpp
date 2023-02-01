/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ExportEarthObservationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExportEarthObservationJobResult::ExportEarthObservationJobResult() : 
    m_exportSourceImages(false),
    m_exportStatus(EarthObservationJobExportStatus::NOT_SET)
{
}

ExportEarthObservationJobResult::ExportEarthObservationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_exportSourceImages(false),
    m_exportStatus(EarthObservationJobExportStatus::NOT_SET)
{
  *this = result;
}

ExportEarthObservationJobResult& ExportEarthObservationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("ExportSourceImages"))
  {
    m_exportSourceImages = jsonValue.GetBool("ExportSourceImages");

  }

  if(jsonValue.ValueExists("ExportStatus"))
  {
    m_exportStatus = EarthObservationJobExportStatusMapper::GetEarthObservationJobExportStatusForName(jsonValue.GetString("ExportStatus"));

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }



  return *this;
}
