/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/CreateHarvestJobResult.h>
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

CreateHarvestJobResult::CreateHarvestJobResult() : 
    m_status(HarvestJobStatus::NOT_SET)
{
}

CreateHarvestJobResult::CreateHarvestJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateHarvestJobResult()
{
  *this = result;
}

CreateHarvestJobResult& CreateHarvestJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelGroupName"))
  {
    m_channelGroupName = jsonValue.GetString("ChannelGroupName");

  }

  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

  }

  if(jsonValue.ValueExists("OriginEndpointName"))
  {
    m_originEndpointName = jsonValue.GetString("OriginEndpointName");

  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");

  }

  if(jsonValue.ValueExists("HarvestJobName"))
  {
    m_harvestJobName = jsonValue.GetString("HarvestJobName");

  }

  if(jsonValue.ValueExists("HarvestedManifests"))
  {
    m_harvestedManifests = jsonValue.GetObject("HarvestedManifests");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ScheduleConfiguration"))
  {
    m_scheduleConfiguration = jsonValue.GetObject("ScheduleConfiguration");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("ModifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("ModifiedAt");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = HarvestJobStatusMapper::GetHarvestJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
