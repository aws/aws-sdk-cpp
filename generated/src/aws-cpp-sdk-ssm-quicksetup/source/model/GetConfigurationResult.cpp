/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/GetConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMQuickSetup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfigurationResult::GetConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConfigurationResult& GetConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Account"))
  {
    m_account = jsonValue.GetString("Account");
    m_accountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConfigurationDefinitionId"))
  {
    m_configurationDefinitionId = jsonValue.GetString("ConfigurationDefinitionId");
    m_configurationDefinitionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetString("LastModifiedAt");
    m_lastModifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagerArn"))
  {
    m_managerArn = jsonValue.GetString("ManagerArn");
    m_managerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusSummaries"))
  {
    Aws::Utils::Array<JsonView> statusSummariesJsonList = jsonValue.GetArray("StatusSummaries");
    for(unsigned statusSummariesIndex = 0; statusSummariesIndex < statusSummariesJsonList.GetLength(); ++statusSummariesIndex)
    {
      m_statusSummaries.push_back(statusSummariesJsonList[statusSummariesIndex].AsObject());
    }
    m_statusSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypeVersion"))
  {
    m_typeVersion = jsonValue.GetString("TypeVersion");
    m_typeVersionHasBeenSet = true;
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
