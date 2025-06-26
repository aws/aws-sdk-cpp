/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/GetDataAccessorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataAccessorResult::GetDataAccessorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataAccessorResult& GetDataAccessorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataAccessorId"))
  {
    m_dataAccessorId = jsonValue.GetString("dataAccessorId");
    m_dataAccessorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataAccessorArn"))
  {
    m_dataAccessorArn = jsonValue.GetString("dataAccessorArn");
    m_dataAccessorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idcApplicationArn"))
  {
    m_idcApplicationArn = jsonValue.GetString("idcApplicationArn");
    m_idcApplicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetString("principal");
    m_principalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionConfigurations"))
  {
    Aws::Utils::Array<JsonView> actionConfigurationsJsonList = jsonValue.GetArray("actionConfigurations");
    for(unsigned actionConfigurationsIndex = 0; actionConfigurationsIndex < actionConfigurationsJsonList.GetLength(); ++actionConfigurationsIndex)
    {
      m_actionConfigurations.push_back(actionConfigurationsJsonList[actionConfigurationsIndex].AsObject());
    }
    m_actionConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authenticationDetail"))
  {
    m_authenticationDetail = jsonValue.GetObject("authenticationDetail");
    m_authenticationDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
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
