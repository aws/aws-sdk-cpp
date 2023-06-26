/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateWorkspaceImageResult.h>
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

CreateWorkspaceImageResult::CreateWorkspaceImageResult() : 
    m_state(WorkspaceImageState::NOT_SET),
    m_requiredTenancy(WorkspaceImageRequiredTenancy::NOT_SET)
{
}

CreateWorkspaceImageResult::CreateWorkspaceImageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(WorkspaceImageState::NOT_SET),
    m_requiredTenancy(WorkspaceImageRequiredTenancy::NOT_SET)
{
  *this = result;
}

CreateWorkspaceImageResult& CreateWorkspaceImageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = jsonValue.GetObject("OperatingSystem");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = WorkspaceImageStateMapper::GetWorkspaceImageStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("RequiredTenancy"))
  {
    m_requiredTenancy = WorkspaceImageRequiredTenancyMapper::GetWorkspaceImageRequiredTenancyForName(jsonValue.GetString("RequiredTenancy"));

  }

  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetDouble("Created");

  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
