﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/Deployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Deployment::Deployment(JsonView jsonValue)
{
  *this = jsonValue;
}

Deployment& Deployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentId"))
  {
    m_deploymentId = jsonValue.GetString("DeploymentId");
    m_deploymentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");
    m_stackIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppId"))
  {
    m_appId = jsonValue.GetString("AppId");
    m_appIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedAt"))
  {
    m_completedAt = jsonValue.GetString("CompletedAt");
    m_completedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInteger("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IamUserArn"))
  {
    m_iamUserArn = jsonValue.GetString("IamUserArn");
    m_iamUserArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Comment"))
  {
    m_comment = jsonValue.GetString("Comment");
    m_commentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Command"))
  {
    m_command = jsonValue.GetObject("Command");
    m_commandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomJson"))
  {
    m_customJson = jsonValue.GetString("CustomJson");
    m_customJsonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceIds"))
  {
    Aws::Utils::Array<JsonView> instanceIdsJsonList = jsonValue.GetArray("InstanceIds");
    for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
    {
      m_instanceIds.push_back(instanceIdsJsonList[instanceIdsIndex].AsString());
    }
    m_instanceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue Deployment::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_appIdHasBeenSet)
  {
   payload.WithString("AppId", m_appId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithString("CompletedAt", m_completedAt);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("Duration", m_duration);

  }

  if(m_iamUserArnHasBeenSet)
  {
   payload.WithString("IamUserArn", m_iamUserArn);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_commandHasBeenSet)
  {
   payload.WithObject("Command", m_command.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_customJsonHasBeenSet)
  {
   payload.WithString("CustomJson", m_customJson);

  }

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
   }
   payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
