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

GetConfigurationResult::GetConfigurationResult()
{
}

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

  }

  if(jsonValue.ValueExists("ConfigurationDefinitionId"))
  {
    m_configurationDefinitionId = jsonValue.GetString("ConfigurationDefinitionId");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("LastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetString("LastModifiedAt");

  }

  if(jsonValue.ValueExists("ManagerArn"))
  {
    m_managerArn = jsonValue.GetString("ManagerArn");

  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

  }

  if(jsonValue.ValueExists("StatusSummaries"))
  {
    Aws::Utils::Array<JsonView> statusSummariesJsonList = jsonValue.GetArray("StatusSummaries");
    for(unsigned statusSummariesIndex = 0; statusSummariesIndex < statusSummariesJsonList.GetLength(); ++statusSummariesIndex)
    {
      m_statusSummaries.push_back(statusSummariesJsonList[statusSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

  }

  if(jsonValue.ValueExists("TypeVersion"))
  {
    m_typeVersion = jsonValue.GetString("TypeVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
