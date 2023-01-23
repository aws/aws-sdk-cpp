/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeWorkspaceSnapshotsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWorkspaceSnapshotsResult::DescribeWorkspaceSnapshotsResult()
{
}

DescribeWorkspaceSnapshotsResult::DescribeWorkspaceSnapshotsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeWorkspaceSnapshotsResult& DescribeWorkspaceSnapshotsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RebuildSnapshots"))
  {
    Aws::Utils::Array<JsonView> rebuildSnapshotsJsonList = jsonValue.GetArray("RebuildSnapshots");
    for(unsigned rebuildSnapshotsIndex = 0; rebuildSnapshotsIndex < rebuildSnapshotsJsonList.GetLength(); ++rebuildSnapshotsIndex)
    {
      m_rebuildSnapshots.push_back(rebuildSnapshotsJsonList[rebuildSnapshotsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RestoreSnapshots"))
  {
    Aws::Utils::Array<JsonView> restoreSnapshotsJsonList = jsonValue.GetArray("RestoreSnapshots");
    for(unsigned restoreSnapshotsIndex = 0; restoreSnapshotsIndex < restoreSnapshotsJsonList.GetLength(); ++restoreSnapshotsIndex)
    {
      m_restoreSnapshots.push_back(restoreSnapshotsJsonList[restoreSnapshotsIndex].AsObject());
    }
  }



  return *this;
}
