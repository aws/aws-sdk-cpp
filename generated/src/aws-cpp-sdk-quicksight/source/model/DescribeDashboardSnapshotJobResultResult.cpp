/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeDashboardSnapshotJobResultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDashboardSnapshotJobResultResult::DescribeDashboardSnapshotJobResultResult() : 
    m_jobStatus(SnapshotJobStatus::NOT_SET),
    m_status(0)
{
}

DescribeDashboardSnapshotJobResultResult::DescribeDashboardSnapshotJobResultResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(SnapshotJobStatus::NOT_SET),
    m_status(0)
{
  *this = result;
}

DescribeDashboardSnapshotJobResultResult& DescribeDashboardSnapshotJobResultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("JobStatus"))
  {
    m_jobStatus = SnapshotJobStatusMapper::GetSnapshotJobStatusForName(jsonValue.GetString("JobStatus"));

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

  }

  if(jsonValue.ValueExists("Result"))
  {
    m_result = jsonValue.GetObject("Result");

  }

  if(jsonValue.ValueExists("ErrorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("ErrorInfo");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
