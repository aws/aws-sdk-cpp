/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/StopApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopApplicationRequest::StopApplicationRequest() : 
    m_applicationIdHasBeenSet(false),
    m_stopConnectedEntity(ConnectedEntityType::NOT_SET),
    m_stopConnectedEntityHasBeenSet(false),
    m_includeEc2InstanceShutdown(false),
    m_includeEc2InstanceShutdownHasBeenSet(false)
{
}

Aws::String StopApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_stopConnectedEntityHasBeenSet)
  {
   payload.WithString("StopConnectedEntity", ConnectedEntityTypeMapper::GetNameForConnectedEntityType(m_stopConnectedEntity));
  }

  if(m_includeEc2InstanceShutdownHasBeenSet)
  {
   payload.WithBool("IncludeEc2InstanceShutdown", m_includeEc2InstanceShutdown);

  }

  return payload.View().WriteReadable();
}




