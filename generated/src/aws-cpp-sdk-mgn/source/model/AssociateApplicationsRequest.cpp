﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/AssociateApplicationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateApplicationsRequest::AssociateApplicationsRequest() : 
    m_accountIDHasBeenSet(false),
    m_applicationIDsHasBeenSet(false),
    m_waveIDHasBeenSet(false)
{
}

Aws::String AssociateApplicationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIDHasBeenSet)
  {
   payload.WithString("accountID", m_accountID);

  }

  if(m_applicationIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationIDsJsonList(m_applicationIDs.size());
   for(unsigned applicationIDsIndex = 0; applicationIDsIndex < applicationIDsJsonList.GetLength(); ++applicationIDsIndex)
   {
     applicationIDsJsonList[applicationIDsIndex].AsString(m_applicationIDs[applicationIDsIndex]);
   }
   payload.WithArray("applicationIDs", std::move(applicationIDsJsonList));

  }

  if(m_waveIDHasBeenSet)
  {
   payload.WithString("waveID", m_waveID);

  }

  return payload.View().WriteReadable();
}




