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

GetImportFileTaskResult::GetImportFileTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetImportFileTaskResult& GetImportFileTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetDouble("completionTime");
    m_completionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("importName"))
  {
    m_importName = jsonValue.GetString("importName");
    m_importNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputS3Bucket"))
  {
    m_inputS3Bucket = jsonValue.GetString("inputS3Bucket");
    m_inputS3BucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputS3Key"))
  {
    m_inputS3Key = jsonValue.GetString("inputS3Key");
    m_inputS3KeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfRecordsFailed"))
  {
    m_numberOfRecordsFailed = jsonValue.GetInteger("numberOfRecordsFailed");
    m_numberOfRecordsFailedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfRecordsSuccess"))
  {
    m_numberOfRecordsSuccess = jsonValue.GetInteger("numberOfRecordsSuccess");
    m_numberOfRecordsSuccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ImportFileTaskStatusMapper::GetImportFileTaskStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReportS3Bucket"))
  {
    m_statusReportS3Bucket = jsonValue.GetString("statusReportS3Bucket");
    m_statusReportS3BucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReportS3Key"))
  {
    m_statusReportS3Key = jsonValue.GetString("statusReportS3Key");
    m_statusReportS3KeyHasBeenSet = true;
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
