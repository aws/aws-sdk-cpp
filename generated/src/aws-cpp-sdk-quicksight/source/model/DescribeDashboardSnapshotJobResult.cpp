/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeDashboardSnapshotJobResult.h>
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

DescribeDashboardSnapshotJobResult::DescribeDashboardSnapshotJobResult() : 
    m_jobStatus(SnapshotJobStatus::NOT_SET),
    m_status(0)
{
}

DescribeDashboardSnapshotJobResult::DescribeDashboardSnapshotJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_jobStatus(SnapshotJobStatus::NOT_SET),
    m_status(0)
{
  *this = result;
}

DescribeDashboardSnapshotJobResult& DescribeDashboardSnapshotJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");

  }

  if(jsonValue.ValueExists("DashboardId"))
  {
    m_dashboardId = jsonValue.GetString("DashboardId");

  }

  if(jsonValue.ValueExists("SnapshotJobId"))
  {
    m_snapshotJobId = jsonValue.GetString("SnapshotJobId");

  }

  if(jsonValue.ValueExists("UserConfiguration"))
  {
    m_userConfiguration = jsonValue.GetObject("UserConfiguration");

  }

  if(jsonValue.ValueExists("SnapshotConfiguration"))
  {
    m_snapshotConfiguration = jsonValue.GetObject("SnapshotConfiguration");

  }

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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetInteger("Status");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
