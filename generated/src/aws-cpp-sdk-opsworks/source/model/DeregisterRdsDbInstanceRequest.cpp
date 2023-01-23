/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DeregisterRdsDbInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeregisterRdsDbInstanceRequest::DeregisterRdsDbInstanceRequest() : 
    m_rdsDbInstanceArnHasBeenSet(false)
{
}

Aws::String DeregisterRdsDbInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rdsDbInstanceArnHasBeenSet)
  {
   payload.WithString("RdsDbInstanceArn", m_rdsDbInstanceArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeregisterRdsDbInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DeregisterRdsDbInstance"));
  return headers;

}




