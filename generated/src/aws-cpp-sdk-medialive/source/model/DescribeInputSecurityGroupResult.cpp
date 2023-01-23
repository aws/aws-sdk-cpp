/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeInputSecurityGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInputSecurityGroupResult::DescribeInputSecurityGroupResult() : 
    m_state(InputSecurityGroupState::NOT_SET)
{
}

DescribeInputSecurityGroupResult::DescribeInputSecurityGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(InputSecurityGroupState::NOT_SET)
{
  *this = result;
}

DescribeInputSecurityGroupResult& DescribeInputSecurityGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = InputSecurityGroupStateMapper::GetInputSecurityGroupStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("whitelistRules"))
  {
    Aws::Utils::Array<JsonView> whitelistRulesJsonList = jsonValue.GetArray("whitelistRules");
    for(unsigned whitelistRulesIndex = 0; whitelistRulesIndex < whitelistRulesJsonList.GetLength(); ++whitelistRulesIndex)
    {
      m_whitelistRules.push_back(whitelistRulesJsonList[whitelistRulesIndex].AsObject());
    }
  }



  return *this;
}
