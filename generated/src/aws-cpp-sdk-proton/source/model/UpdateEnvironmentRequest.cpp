﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/UpdateEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateEnvironmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_codebuildRoleArnHasBeenSet)
  {
   payload.WithString("codebuildRoleArn", m_codebuildRoleArn);

  }

  if(m_componentRoleArnHasBeenSet)
  {
   payload.WithString("componentRoleArn", m_componentRoleArn);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("deploymentType", DeploymentUpdateTypeMapper::GetNameForDeploymentUpdateType(m_deploymentType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentAccountConnectionIdHasBeenSet)
  {
   payload.WithString("environmentAccountConnectionId", m_environmentAccountConnectionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_protonServiceRoleArnHasBeenSet)
  {
   payload.WithString("protonServiceRoleArn", m_protonServiceRoleArn);

  }

  if(m_provisioningRepositoryHasBeenSet)
  {
   payload.WithObject("provisioningRepository", m_provisioningRepository.Jsonize());

  }

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", m_spec);

  }

  if(m_templateMajorVersionHasBeenSet)
  {
   payload.WithString("templateMajorVersion", m_templateMajorVersion);

  }

  if(m_templateMinorVersionHasBeenSet)
  {
   payload.WithString("templateMinorVersion", m_templateMinorVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEnvironmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.UpdateEnvironment"));
  return headers;

}




