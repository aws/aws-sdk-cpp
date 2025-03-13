/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/UpdateChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateChannelResult::UpdateChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateChannelResult& UpdateChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");
    m_channelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelGroupName"))
  {
    m_channelGroupName = jsonValue.GetString("ChannelGroupName");
    m_channelGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngestEndpoints"))
  {
    Aws::Utils::Array<JsonView> ingestEndpointsJsonList = jsonValue.GetArray("IngestEndpoints");
    for(unsigned ingestEndpointsIndex = 0; ingestEndpointsIndex < ingestEndpointsJsonList.GetLength(); ++ingestEndpointsIndex)
    {
      m_ingestEndpoints.push_back(ingestEndpointsJsonList[ingestEndpointsIndex].AsObject());
    }
    m_ingestEndpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InputType"))
  {
    m_inputType = InputTypeMapper::GetInputTypeForName(jsonValue.GetString("InputType"));
    m_inputTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");
    m_eTagHasBeenSet = true;
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
  if(jsonValue.ValueExists("InputSwitchConfiguration"))
  {
    m_inputSwitchConfiguration = jsonValue.GetObject("InputSwitchConfiguration");
    m_inputSwitchConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputHeaderConfiguration"))
  {
    m_outputHeaderConfiguration = jsonValue.GetObject("OutputHeaderConfiguration");
    m_outputHeaderConfigurationHasBeenSet = true;
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
