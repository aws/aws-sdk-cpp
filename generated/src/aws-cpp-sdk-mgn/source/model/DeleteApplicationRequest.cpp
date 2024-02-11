/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DeleteApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApplicationRequest::DeleteApplicationRequest() : 
    m_accountIDHasBeenSet(false),
    m_applicationIDHasBeenSet(false)
{
}

Aws::String DeleteApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIDHasBeenSet)
  {
   payload.WithString("accountID", m_accountID);

  }

  if(m_applicationIDHasBeenSet)
  {
   payload.WithString("applicationID", m_applicationID);

  }

  return payload.View().WriteReadable();
}




