/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/CreateApplicationVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateApplicationVersionResult::CreateApplicationVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateApplicationVersionResult& CreateApplicationVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameterDefinitions"))
  {
    Aws::Utils::Array<JsonView> parameterDefinitionsJsonList = jsonValue.GetArray("parameterDefinitions");
    for(unsigned parameterDefinitionsIndex = 0; parameterDefinitionsIndex < parameterDefinitionsJsonList.GetLength(); ++parameterDefinitionsIndex)
    {
      m_parameterDefinitions.push_back(parameterDefinitionsJsonList[parameterDefinitionsIndex].AsObject());
    }
    m_parameterDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requiredCapabilities"))
  {
    Aws::Utils::Array<JsonView> requiredCapabilitiesJsonList = jsonValue.GetArray("requiredCapabilities");
    for(unsigned requiredCapabilitiesIndex = 0; requiredCapabilitiesIndex < requiredCapabilitiesJsonList.GetLength(); ++requiredCapabilitiesIndex)
    {
      m_requiredCapabilities.push_back(CapabilityMapper::GetCapabilityForName(requiredCapabilitiesJsonList[requiredCapabilitiesIndex].AsString()));
    }
    m_requiredCapabilitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourcesSupported"))
  {
    m_resourcesSupported = jsonValue.GetBool("resourcesSupported");
    m_resourcesSupportedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("semanticVersion"))
  {
    m_semanticVersion = jsonValue.GetString("semanticVersion");
    m_semanticVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceCodeArchiveUrl"))
  {
    m_sourceCodeArchiveUrl = jsonValue.GetString("sourceCodeArchiveUrl");
    m_sourceCodeArchiveUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceCodeUrl"))
  {
    m_sourceCodeUrl = jsonValue.GetString("sourceCodeUrl");
    m_sourceCodeUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateUrl"))
  {
    m_templateUrl = jsonValue.GetString("templateUrl");
    m_templateUrlHasBeenSet = true;
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
