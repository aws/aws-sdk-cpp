﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/UpdateStateMachineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateStateMachineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stateMachineArnHasBeenSet)
  {
   payload.WithString("stateMachineArn", m_stateMachineArn);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithString("definition", m_definition);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_loggingConfigurationHasBeenSet)
  {
   payload.WithObject("loggingConfiguration", m_loggingConfiguration.Jsonize());

  }

  if(m_tracingConfigurationHasBeenSet)
  {
   payload.WithObject("tracingConfiguration", m_tracingConfiguration.Jsonize());

  }

  if(m_publishHasBeenSet)
  {
   payload.WithBool("publish", m_publish);

  }

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("versionDescription", m_versionDescription);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStateMachineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.UpdateStateMachine"));
  return headers;

}




