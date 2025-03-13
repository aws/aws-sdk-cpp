/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelCardExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelCardExportJobResult::DescribeModelCardExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeModelCardExportJobResult& DescribeModelCardExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelCardExportJobName"))
  {
    m_modelCardExportJobName = jsonValue.GetString("ModelCardExportJobName");
    m_modelCardExportJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelCardExportJobArn"))
  {
    m_modelCardExportJobArn = jsonValue.GetString("ModelCardExportJobArn");
    m_modelCardExportJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelCardExportJobStatusMapper::GetModelCardExportJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelCardName"))
  {
    m_modelCardName = jsonValue.GetString("ModelCardName");
    m_modelCardNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelCardVersion"))
  {
    m_modelCardVersion = jsonValue.GetInteger("ModelCardVersion");
    m_modelCardVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("LastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportArtifacts"))
  {
    m_exportArtifacts = jsonValue.GetObject("ExportArtifacts");
    m_exportArtifactsHasBeenSet = true;
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
