/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/GetResponsePlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResponsePlanResult::GetResponsePlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResponsePlanResult& GetResponsePlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("chatChannel"))
  {
    m_chatChannel = jsonValue.GetObject("chatChannel");
    m_chatChannelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engagements"))
  {
    Aws::Utils::Array<JsonView> engagementsJsonList = jsonValue.GetArray("engagements");
    for(unsigned engagementsIndex = 0; engagementsIndex < engagementsJsonList.GetLength(); ++engagementsIndex)
    {
      m_engagements.push_back(engagementsJsonList[engagementsIndex].AsString());
    }
    m_engagementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("incidentTemplate"))
  {
    m_incidentTemplate = jsonValue.GetObject("incidentTemplate");
    m_incidentTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("integrations"))
  {
    Aws::Utils::Array<JsonView> integrationsJsonList = jsonValue.GetArray("integrations");
    for(unsigned integrationsIndex = 0; integrationsIndex < integrationsJsonList.GetLength(); ++integrationsIndex)
    {
      m_integrations.push_back(integrationsJsonList[integrationsIndex].AsObject());
    }
    m_integrationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
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
