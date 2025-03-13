/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/GetConfigurationManagerResult.h>
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

GetConfigurationManagerResult::GetConfigurationManagerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConfigurationManagerResult& GetConfigurationManagerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationDefinitions"))
  {
    Aws::Utils::Array<JsonView> configurationDefinitionsJsonList = jsonValue.GetArray("ConfigurationDefinitions");
    for(unsigned configurationDefinitionsIndex = 0; configurationDefinitionsIndex < configurationDefinitionsJsonList.GetLength(); ++configurationDefinitionsIndex)
    {
      m_configurationDefinitions.push_back(configurationDefinitionsJsonList[configurationDefinitionsIndex].AsObject());
    }
    m_configurationDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
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
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
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
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
