/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/CreateSlackChannelConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSlackChannelConfigurationRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




