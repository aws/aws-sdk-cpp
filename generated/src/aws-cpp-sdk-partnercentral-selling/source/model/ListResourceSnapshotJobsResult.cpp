/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListResourceSnapshotJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourceSnapshotJobsResult::ListResourceSnapshotJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourceSnapshotJobsResult& ListResourceSnapshotJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceSnapshotJobSummaries"))
  {
    Aws::Utils::Array<JsonView> resourceSnapshotJobSummariesJsonList = jsonValue.GetArray("ResourceSnapshotJobSummaries");
    for(unsigned resourceSnapshotJobSummariesIndex = 0; resourceSnapshotJobSummariesIndex < resourceSnapshotJobSummariesJsonList.GetLength(); ++resourceSnapshotJobSummariesIndex)
    {
      m_resourceSnapshotJobSummaries.push_back(resourceSnapshotJobSummariesJsonList[resourceSnapshotJobSummariesIndex].AsObject());
    }
    m_resourceSnapshotJobSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
