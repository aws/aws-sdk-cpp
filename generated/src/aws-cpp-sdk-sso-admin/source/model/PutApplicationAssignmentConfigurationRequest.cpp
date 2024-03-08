/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/PutApplicationAssignmentConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutApplicationAssignmentConfigurationRequest::PutApplicationAssignmentConfigurationRequest() : 
    m_applicationArnHasBeenSet(false),
    m_assignmentRequired(false),
    m_assignmentRequiredHasBeenSet(false)
{
}

Aws::String PutApplicationAssignmentConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  if(m_assignmentRequiredHasBeenSet)
  {
   payload.WithBool("AssignmentRequired", m_assignmentRequired);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutApplicationAssignmentConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.PutApplicationAssignmentConfiguration"));
  return headers;

}




