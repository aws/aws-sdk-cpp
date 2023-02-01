/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyChannelSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneyChannelSettings::JourneyChannelSettings() : 
    m_connectCampaignArnHasBeenSet(false),
    m_connectCampaignExecutionRoleArnHasBeenSet(false)
{
}

JourneyChannelSettings::JourneyChannelSettings(JsonView jsonValue) : 
    m_connectCampaignArnHasBeenSet(false),
    m_connectCampaignExecutionRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyChannelSettings& JourneyChannelSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectCampaignArn"))
  {
    m_connectCampaignArn = jsonValue.GetString("ConnectCampaignArn");

    m_connectCampaignArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectCampaignExecutionRoleArn"))
  {
    m_connectCampaignExecutionRoleArn = jsonValue.GetString("ConnectCampaignExecutionRoleArn");

    m_connectCampaignExecutionRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyChannelSettings::Jsonize() const
{
  JsonValue payload;

  if(m_connectCampaignArnHasBeenSet)
  {
   payload.WithString("ConnectCampaignArn", m_connectCampaignArn);

  }

  if(m_connectCampaignExecutionRoleArnHasBeenSet)
  {
   payload.WithString("ConnectCampaignExecutionRoleArn", m_connectCampaignExecutionRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
