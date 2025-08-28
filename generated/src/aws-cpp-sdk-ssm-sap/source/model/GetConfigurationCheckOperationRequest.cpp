/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/GetConfigurationCheckOperationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SsmSap::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetConfigurationCheckOperationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operationIdHasBeenSet)
  {
   payload.WithString("OperationId", m_operationId);

  }

  return payload.View().WriteReadable();
}




