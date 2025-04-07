/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeInputResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInputResult::DescribeInputResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInputResult& DescribeInputResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attachedChannels"))
  {
    Aws::Utils::Array<JsonView> attachedChannelsJsonList = jsonValue.GetArray("attachedChannels");
    for(unsigned attachedChannelsIndex = 0; attachedChannelsIndex < attachedChannelsJsonList.GetLength(); ++attachedChannelsIndex)
    {
      m_attachedChannels.push_back(attachedChannelsJsonList[attachedChannelsIndex].AsString());
    }
    m_attachedChannelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputClass"))
  {
    m_inputClass = InputClassMapper::GetInputClassForName(jsonValue.GetString("inputClass"));
    m_inputClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputDevices"))
  {
    Aws::Utils::Array<JsonView> inputDevicesJsonList = jsonValue.GetArray("inputDevices");
    for(unsigned inputDevicesIndex = 0; inputDevicesIndex < inputDevicesJsonList.GetLength(); ++inputDevicesIndex)
    {
      m_inputDevices.push_back(inputDevicesJsonList[inputDevicesIndex].AsObject());
    }
    m_inputDevicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputPartnerIds"))
  {
    Aws::Utils::Array<JsonView> inputPartnerIdsJsonList = jsonValue.GetArray("inputPartnerIds");
    for(unsigned inputPartnerIdsIndex = 0; inputPartnerIdsIndex < inputPartnerIdsJsonList.GetLength(); ++inputPartnerIdsIndex)
    {
      m_inputPartnerIds.push_back(inputPartnerIdsJsonList[inputPartnerIdsIndex].AsString());
    }
    m_inputPartnerIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputSourceType"))
  {
    m_inputSourceType = InputSourceTypeMapper::GetInputSourceTypeForName(jsonValue.GetString("inputSourceType"));
    m_inputSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaConnectFlows"))
  {
    Aws::Utils::Array<JsonView> mediaConnectFlowsJsonList = jsonValue.GetArray("mediaConnectFlows");
    for(unsigned mediaConnectFlowsIndex = 0; mediaConnectFlowsIndex < mediaConnectFlowsJsonList.GetLength(); ++mediaConnectFlowsIndex)
    {
      m_mediaConnectFlows.push_back(mediaConnectFlowsJsonList[mediaConnectFlowsIndex].AsObject());
    }
    m_mediaConnectFlowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("securityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("securityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = InputStateMapper::GetInputStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = InputTypeMapper::GetInputTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("srtSettings"))
  {
    m_srtSettings = jsonValue.GetObject("srtSettings");
    m_srtSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputNetworkLocation"))
  {
    m_inputNetworkLocation = InputNetworkLocationMapper::GetInputNetworkLocationForName(jsonValue.GetString("inputNetworkLocation"));
    m_inputNetworkLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("multicastSettings"))
  {
    m_multicastSettings = jsonValue.GetObject("multicastSettings");
    m_multicastSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("smpte2110ReceiverGroupSettings"))
  {
    m_smpte2110ReceiverGroupSettings = jsonValue.GetObject("smpte2110ReceiverGroupSettings");
    m_smpte2110ReceiverGroupSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sdiSources"))
  {
    Aws::Utils::Array<JsonView> sdiSourcesJsonList = jsonValue.GetArray("sdiSources");
    for(unsigned sdiSourcesIndex = 0; sdiSourcesIndex < sdiSourcesJsonList.GetLength(); ++sdiSourcesIndex)
    {
      m_sdiSources.push_back(sdiSourcesJsonList[sdiSourcesIndex].AsString());
    }
    m_sdiSourcesHasBeenSet = true;
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
