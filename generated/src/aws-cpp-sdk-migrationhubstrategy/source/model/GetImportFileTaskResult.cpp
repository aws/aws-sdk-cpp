/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetImportFileTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImportFileTaskResult::GetImportFileTaskResult() : 
    m_numberOfRecordsFailed(0),
    m_numberOfRecordsSuccess(0),
    m_status(ImportFileTaskStatus::NOT_SET)
{
}

GetImportFileTaskResult::GetImportFileTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfRecordsFailed(0),
    m_numberOfRecordsSuccess(0),
    m_status(ImportFileTaskStatus::NOT_SET)
{
  *this = result;
}

GetImportFileTaskResult& GetImportFileTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetDouble("completionTime");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("importName"))
  {
    m_importName = jsonValue.GetString("importName");

  }

  if(jsonValue.ValueExists("inputS3Bucket"))
  {
    m_inputS3Bucket = jsonValue.GetString("inputS3Bucket");

  }

  if(jsonValue.ValueExists("inputS3Key"))
  {
    m_inputS3Key = jsonValue.GetString("inputS3Key");

  }

  if(jsonValue.ValueExists("numberOfRecordsFailed"))
  {
    m_numberOfRecordsFailed = jsonValue.GetInteger("numberOfRecordsFailed");

  }

  if(jsonValue.ValueExists("numberOfRecordsSuccess"))
  {
    m_numberOfRecordsSuccess = jsonValue.GetInteger("numberOfRecordsSuccess");

  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ImportFileTaskStatusMapper::GetImportFileTaskStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReportS3Bucket"))
  {
    m_statusReportS3Bucket = jsonValue.GetString("statusReportS3Bucket");

  }

  if(jsonValue.ValueExists("statusReportS3Key"))
  {
    m_statusReportS3Key = jsonValue.GetString("statusReportS3Key");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
