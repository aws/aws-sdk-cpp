/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelCardExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelCardExportJobResult::DescribeModelCardExportJobResult() : 
    m_status(ModelCardExportJobStatus::NOT_SET),
    m_modelCardVersion(0)
{
}

DescribeModelCardExportJobResult::DescribeModelCardExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ModelCardExportJobStatus::NOT_SET),
    m_modelCardVersion(0)
{
  *this = result;
}

DescribeModelCardExportJobResult& DescribeModelCardExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelCardExportJobName"))
  {
    m_modelCardExportJobName = jsonValue.GetString("ModelCardExportJobName");

  }

  if(jsonValue.ValueExists("ModelCardExportJobArn"))
  {
    m_modelCardExportJobArn = jsonValue.GetString("ModelCardExportJobArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelCardExportJobStatusMapper::GetModelCardExportJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("ModelCardName"))
  {
    m_modelCardName = jsonValue.GetString("ModelCardName");

  }

  if(jsonValue.ValueExists("ModelCardVersion"))
  {
    m_modelCardVersion = jsonValue.GetInteger("ModelCardVersion");

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("LastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("LastModifiedAt");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("ExportArtifacts"))
  {
    m_exportArtifacts = jsonValue.GetObject("ExportArtifacts");

  }



  return *this;
}
