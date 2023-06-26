/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Channel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Channel::Channel() : 
    m_arnHasBeenSet(false),
    m_cdiInputSpecificationHasBeenSet(false),
    m_channelClass(ChannelClass::NOT_SET),
    m_channelClassHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_egressEndpointsHasBeenSet(false),
    m_encoderSettingsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inputAttachmentsHasBeenSet(false),
    m_inputSpecificationHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false),
    m_maintenanceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pipelineDetailsHasBeenSet(false),
    m_pipelinesRunningCount(0),
    m_pipelinesRunningCountHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_state(ChannelState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
}

Channel::Channel(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_cdiInputSpecificationHasBeenSet(false),
    m_channelClass(ChannelClass::NOT_SET),
    m_channelClassHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_egressEndpointsHasBeenSet(false),
    m_encoderSettingsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_inputAttachmentsHasBeenSet(false),
    m_inputSpecificationHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false),
    m_maintenanceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pipelineDetailsHasBeenSet(false),
    m_pipelinesRunningCount(0),
    m_pipelinesRunningCountHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_state(ChannelState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
  *this = jsonValue;
}

Channel& Channel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cdiInputSpecification"))
  {
    m_cdiInputSpecification = jsonValue.GetObject("cdiInputSpecification");

    m_cdiInputSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("channelClass"))
  {
    m_channelClass = ChannelClassMapper::GetChannelClassForName(jsonValue.GetString("channelClass"));

    m_channelClassHasBeenSet = true;
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

  if(jsonValue.ValueExists("egressEndpoints"))
  {
    Aws::Utils::Array<JsonView> egressEndpointsJsonList = jsonValue.GetArray("egressEndpoints");
    for(unsigned egressEndpointsIndex = 0; egressEndpointsIndex < egressEndpointsJsonList.GetLength(); ++egressEndpointsIndex)
    {
      m_egressEndpoints.push_back(egressEndpointsJsonList[egressEndpointsIndex].AsObject());
    }
    m_egressEndpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encoderSettings"))
  {
    m_encoderSettings = jsonValue.GetObject("encoderSettings");

    m_encoderSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputAttachments"))
  {
    Aws::Utils::Array<JsonView> inputAttachmentsJsonList = jsonValue.GetArray("inputAttachments");
    for(unsigned inputAttachmentsIndex = 0; inputAttachmentsIndex < inputAttachmentsJsonList.GetLength(); ++inputAttachmentsIndex)
    {
      m_inputAttachments.push_back(inputAttachmentsJsonList[inputAttachmentsIndex].AsObject());
    }
    m_inputAttachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputSpecification"))
  {
    m_inputSpecification = jsonValue.GetObject("inputSpecification");

    m_inputSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("logLevel"));

    m_logLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maintenance"))
  {
    m_maintenance = jsonValue.GetObject("maintenance");

    m_maintenanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineDetails"))
  {
    Aws::Utils::Array<JsonView> pipelineDetailsJsonList = jsonValue.GetArray("pipelineDetails");
    for(unsigned pipelineDetailsIndex = 0; pipelineDetailsIndex < pipelineDetailsJsonList.GetLength(); ++pipelineDetailsIndex)
    {
      m_pipelineDetails.push_back(pipelineDetailsJsonList[pipelineDetailsIndex].AsObject());
    }
    m_pipelineDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelinesRunningCount"))
  {
    m_pipelinesRunningCount = jsonValue.GetInteger("pipelinesRunningCount");

    m_pipelinesRunningCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ChannelStateMapper::GetChannelStateForName(jsonValue.GetString("state"));

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

  if(jsonValue.ValueExists("vpc"))
  {
    m_vpc = jsonValue.GetObject("vpc");

    m_vpcHasBeenSet = true;
  }

  return *this;
}

JsonValue Channel::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_cdiInputSpecificationHasBeenSet)
  {
   payload.WithObject("cdiInputSpecification", m_cdiInputSpecification.Jsonize());

  }

  if(m_channelClassHasBeenSet)
  {
   payload.WithString("channelClass", ChannelClassMapper::GetNameForChannelClass(m_channelClass));
  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("destinations", std::move(destinationsJsonList));

  }

  if(m_egressEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> egressEndpointsJsonList(m_egressEndpoints.size());
   for(unsigned egressEndpointsIndex = 0; egressEndpointsIndex < egressEndpointsJsonList.GetLength(); ++egressEndpointsIndex)
   {
     egressEndpointsJsonList[egressEndpointsIndex].AsObject(m_egressEndpoints[egressEndpointsIndex].Jsonize());
   }
   payload.WithArray("egressEndpoints", std::move(egressEndpointsJsonList));

  }

  if(m_encoderSettingsHasBeenSet)
  {
   payload.WithObject("encoderSettings", m_encoderSettings.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_inputAttachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputAttachmentsJsonList(m_inputAttachments.size());
   for(unsigned inputAttachmentsIndex = 0; inputAttachmentsIndex < inputAttachmentsJsonList.GetLength(); ++inputAttachmentsIndex)
   {
     inputAttachmentsJsonList[inputAttachmentsIndex].AsObject(m_inputAttachments[inputAttachmentsIndex].Jsonize());
   }
   payload.WithArray("inputAttachments", std::move(inputAttachmentsJsonList));

  }

  if(m_inputSpecificationHasBeenSet)
  {
   payload.WithObject("inputSpecification", m_inputSpecification.Jsonize());

  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("logLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  if(m_maintenanceHasBeenSet)
  {
   payload.WithObject("maintenance", m_maintenance.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pipelineDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pipelineDetailsJsonList(m_pipelineDetails.size());
   for(unsigned pipelineDetailsIndex = 0; pipelineDetailsIndex < pipelineDetailsJsonList.GetLength(); ++pipelineDetailsIndex)
   {
     pipelineDetailsJsonList[pipelineDetailsIndex].AsObject(m_pipelineDetails[pipelineDetailsIndex].Jsonize());
   }
   payload.WithArray("pipelineDetails", std::move(pipelineDetailsJsonList));

  }

  if(m_pipelinesRunningCountHasBeenSet)
  {
   payload.WithInteger("pipelinesRunningCount", m_pipelinesRunningCount);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ChannelStateMapper::GetNameForChannelState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("vpc", m_vpc.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
