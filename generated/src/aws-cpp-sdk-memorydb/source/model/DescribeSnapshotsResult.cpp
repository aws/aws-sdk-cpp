/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DescribeSnapshotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSnapshotsResult::DescribeSnapshotsResult()
{
}

DescribeSnapshotsResult::DescribeSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSnapshotsResult& DescribeSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Snapshots"))
  {
    Aws::Utils::Array<JsonView> snapshotsJsonList = jsonValue.GetArray("Snapshots");
    for(unsigned snapshotsIndex = 0; snapshotsIndex < snapshotsJsonList.GetLength(); ++snapshotsIndex)
    {
      m_snapshots.push_back(snapshotsJsonList[snapshotsIndex].AsObject());
    }
  }



  return *this;
}
