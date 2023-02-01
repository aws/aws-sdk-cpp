/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeInputResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInputResult::DescribeInputResult() : 
    m_inputClass(InputClass::NOT_SET),
    m_inputSourceType(InputSourceType::NOT_SET),
    m_state(InputState::NOT_SET),
    m_type(InputType::NOT_SET)
{
}

DescribeInputResult::DescribeInputResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_inputClass(InputClass::NOT_SET),
    m_inputSourceType(InputSourceType::NOT_SET),
    m_state(InputState::NOT_SET),
    m_type(InputType::NOT_SET)
{
  *this = result;
}

DescribeInputResult& DescribeInputResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("attachedChannels"))
  {
    Aws::Utils::Array<JsonView> attachedChannelsJsonList = jsonValue.GetArray("attachedChannels");
    for(unsigned attachedChannelsIndex = 0; attachedChannelsIndex < attachedChannelsJsonList.GetLength(); ++attachedChannelsIndex)
    {
      m_attachedChannels.push_back(attachedChannelsJsonList[attachedChannelsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("inputClass"))
  {
    m_inputClass = InputClassMapper::GetInputClassForName(jsonValue.GetString("inputClass"));

  }

  if(jsonValue.ValueExists("inputDevices"))
  {
    Aws::Utils::Array<JsonView> inputDevicesJsonList = jsonValue.GetArray("inputDevices");
    for(unsigned inputDevicesIndex = 0; inputDevicesIndex < inputDevicesJsonList.GetLength(); ++inputDevicesIndex)
    {
      m_inputDevices.push_back(inputDevicesJsonList[inputDevicesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("inputPartnerIds"))
  {
    Aws::Utils::Array<JsonView> inputPartnerIdsJsonList = jsonValue.GetArray("inputPartnerIds");
    for(unsigned inputPartnerIdsIndex = 0; inputPartnerIdsIndex < inputPartnerIdsJsonList.GetLength(); ++inputPartnerIdsIndex)
    {
      m_inputPartnerIds.push_back(inputPartnerIdsJsonList[inputPartnerIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("inputSourceType"))
  {
    m_inputSourceType = InputSourceTypeMapper::GetInputSourceTypeForName(jsonValue.GetString("inputSourceType"));

  }

  if(jsonValue.ValueExists("mediaConnectFlows"))
  {
    Aws::Utils::Array<JsonView> mediaConnectFlowsJsonList = jsonValue.GetArray("mediaConnectFlows");
    for(unsigned mediaConnectFlowsIndex = 0; mediaConnectFlowsIndex < mediaConnectFlowsJsonList.GetLength(); ++mediaConnectFlowsIndex)
    {
      m_mediaConnectFlows.push_back(mediaConnectFlowsJsonList[mediaConnectFlowsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = InputStateMapper::GetInputStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = InputTypeMapper::GetInputTypeForName(jsonValue.GetString("type"));

  }



  return *this;
}
