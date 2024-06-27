/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/RegisterWorkspaceDirectoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterWorkspaceDirectoryResult::RegisterWorkspaceDirectoryResult() : 
    m_state(WorkspaceDirectoryState::NOT_SET)
{
}

RegisterWorkspaceDirectoryResult::RegisterWorkspaceDirectoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : RegisterWorkspaceDirectoryResult()
{
  *this = result;
}

RegisterWorkspaceDirectoryResult& RegisterWorkspaceDirectoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = WorkspaceDirectoryStateMapper::GetWorkspaceDirectoryStateForName(jsonValue.GetString("State"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
