/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/SlackChannelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupportApp
{
namespace Model
{

SlackChannelConfiguration::SlackChannelConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SlackChannelConfiguration& SlackChannelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");
    m_channelIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelName"))
  {
    m_channelName = jsonValue.GetString("channelName");
    m_channelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("channelRoleArn"))
  {
    m_channelRoleArn = jsonValue.GetString("channelRoleArn");
    m_channelRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notifyOnAddCorrespondenceToCase"))
  {
    m_notifyOnAddCorrespondenceToCase = jsonValue.GetBool("notifyOnAddCorrespondenceToCase");
    m_notifyOnAddCorrespondenceToCaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notifyOnCaseSeverity"))
  {
    m_notifyOnCaseSeverity = NotificationSeverityLevelMapper::GetNotificationSeverityLevelForName(jsonValue.GetString("notifyOnCaseSeverity"));
    m_notifyOnCaseSeverityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notifyOnCreateOrReopenCase"))
  {
    m_notifyOnCreateOrReopenCase = jsonValue.GetBool("notifyOnCreateOrReopenCase");
    m_notifyOnCreateOrReopenCaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notifyOnResolveCase"))
  {
    m_notifyOnResolveCase = jsonValue.GetBool("notifyOnResolveCase");
    m_notifyOnResolveCaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("teamId"))
  {
    m_teamId = jsonValue.GetString("teamId");
    m_teamIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SlackChannelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("channelId", m_channelId);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("channelName", m_channelName);

  }

  if(m_channelRoleArnHasBeenSet)
  {
   payload.WithString("channelRoleArn", m_channelRoleArn);

  }

  if(m_notifyOnAddCorrespondenceToCaseHasBeenSet)
  {
   payload.WithBool("notifyOnAddCorrespondenceToCase", m_notifyOnAddCorrespondenceToCase);

  }

  if(m_notifyOnCaseSeverityHasBeenSet)
  {
   payload.WithString("notifyOnCaseSeverity", NotificationSeverityLevelMapper::GetNameForNotificationSeverityLevel(m_notifyOnCaseSeverity));
  }

  if(m_notifyOnCreateOrReopenCaseHasBeenSet)
  {
   payload.WithBool("notifyOnCreateOrReopenCase", m_notifyOnCreateOrReopenCase);

  }

  if(m_notifyOnResolveCaseHasBeenSet)
  {
   payload.WithBool("notifyOnResolveCase", m_notifyOnResolveCase);

  }

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("teamId", m_teamId);

  }

  return payload;
}

} // namespace Model
} // namespace SupportApp
} // namespace Aws
