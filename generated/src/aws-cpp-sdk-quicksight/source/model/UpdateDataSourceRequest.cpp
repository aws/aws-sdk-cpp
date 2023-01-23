/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataSourceRequest::UpdateDataSourceRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataSourceParametersHasBeenSet(false),
    m_credentialsHasBeenSet(false),
    m_vpcConnectionPropertiesHasBeenSet(false),
    m_sslPropertiesHasBeenSet(false)
{
}

Aws::String UpdateDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_dataSourceParametersHasBeenSet)
  {
   payload.WithObject("DataSourceParameters", m_dataSourceParameters.Jsonize());

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("Credentials", m_credentials.Jsonize());

  }

  if(m_vpcConnectionPropertiesHasBeenSet)
  {
   payload.WithObject("VpcConnectionProperties", m_vpcConnectionProperties.Jsonize());

  }

  if(m_sslPropertiesHasBeenSet)
  {
   payload.WithObject("SslProperties", m_sslProperties.Jsonize());

  }

  return payload.View().WriteReadable();
}




