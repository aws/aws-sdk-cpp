/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetReplicationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReplicationJobsResult::GetReplicationJobsResult()
{
}

GetReplicationJobsResult::GetReplicationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetReplicationJobsResult& GetReplicationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("replicationJobList"))
  {
    Aws::Utils::Array<JsonView> replicationJobListJsonList = jsonValue.GetArray("replicationJobList");
    for(unsigned replicationJobListIndex = 0; replicationJobListIndex < replicationJobListJsonList.GetLength(); ++replicationJobListIndex)
    {
      m_replicationJobList.push_back(replicationJobListJsonList[replicationJobListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
