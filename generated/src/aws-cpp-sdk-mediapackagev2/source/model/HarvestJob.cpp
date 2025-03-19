/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/HarvestJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

HarvestJob::HarvestJob(JsonView jsonValue)
{
  *this = jsonValue;
}

HarvestJob& HarvestJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelGroupName"))
  {
    m_channelGroupName = jsonValue.GetString("ChannelGroupName");
    m_channelGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");
    m_channelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginEndpointName"))
  {
    m_originEndpointName = jsonValue.GetString("OriginEndpointName");
    m_originEndpointNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetObject("Destination");
    m_destinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HarvestJobName"))
  {
    m_harvestJobName = jsonValue.GetString("HarvestJobName");
    m_harvestJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HarvestedManifests"))
  {
    m_harvestedManifests = jsonValue.GetObject("HarvestedManifests");
    m_harvestedManifestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduleConfiguration"))
  {
    m_scheduleConfiguration = jsonValue.GetObject("ScheduleConfiguration");
    m_scheduleConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
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
  if(jsonValue.ValueExists("Status"))
  {
    m_status = HarvestJobStatusMapper::GetHarvestJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");
    m_eTagHasBeenSet = true;
  }
  return *this;
}

JsonValue HarvestJob::Jsonize() const
{
  JsonValue payload;

  if(m_channelGroupNameHasBeenSet)
  {
   payload.WithString("ChannelGroupName", m_channelGroupName);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_originEndpointNameHasBeenSet)
  {
   payload.WithString("OriginEndpointName", m_originEndpointName);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

  }

  if(m_harvestJobNameHasBeenSet)
  {
   payload.WithString("HarvestJobName", m_harvestJobName);

  }

  if(m_harvestedManifestsHasBeenSet)
  {
   payload.WithObject("HarvestedManifests", m_harvestedManifests.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_scheduleConfigurationHasBeenSet)
  {
   payload.WithObject("ScheduleConfiguration", m_scheduleConfiguration.Jsonize());

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("ModifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", HarvestJobStatusMapper::GetNameForHarvestJobStatus(m_status));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("ETag", m_eTag);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
