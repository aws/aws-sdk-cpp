/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/GetWorkspaceInstanceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkspaceInstanceResult::GetWorkspaceInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWorkspaceInstanceResult& GetWorkspaceInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WorkspaceInstanceErrors"))
  {
    Aws::Utils::Array<JsonView> workspaceInstanceErrorsJsonList = jsonValue.GetArray("WorkspaceInstanceErrors");
    for(unsigned workspaceInstanceErrorsIndex = 0; workspaceInstanceErrorsIndex < workspaceInstanceErrorsJsonList.GetLength(); ++workspaceInstanceErrorsIndex)
    {
      m_workspaceInstanceErrors.push_back(workspaceInstanceErrorsJsonList[workspaceInstanceErrorsIndex].AsObject());
    }
    m_workspaceInstanceErrorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2InstanceErrors"))
  {
    Aws::Utils::Array<JsonView> eC2InstanceErrorsJsonList = jsonValue.GetArray("EC2InstanceErrors");
    for(unsigned eC2InstanceErrorsIndex = 0; eC2InstanceErrorsIndex < eC2InstanceErrorsJsonList.GetLength(); ++eC2InstanceErrorsIndex)
    {
      m_eC2InstanceErrors.push_back(eC2InstanceErrorsJsonList[eC2InstanceErrorsIndex].AsObject());
    }
    m_eC2InstanceErrorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionState"))
  {
    m_provisionState = ProvisionStateEnumMapper::GetProvisionStateEnumForName(jsonValue.GetString("ProvisionState"));
    m_provisionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WorkspaceInstanceId"))
  {
    m_workspaceInstanceId = jsonValue.GetString("WorkspaceInstanceId");
    m_workspaceInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2ManagedInstance"))
  {
    m_eC2ManagedInstance = jsonValue.GetObject("EC2ManagedInstance");
    m_eC2ManagedInstanceHasBeenSet = true;
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
