/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DeleteJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteJobRequest::DeleteJobRequest() : 
    m_accountIDHasBeenSet(false),
    m_jobIDHasBeenSet(false)
{
}

Aws::String DeleteJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIDHasBeenSet)
  {
   payload.WithString("accountID", m_accountID);

  }

  if(m_jobIDHasBeenSet)
  {
   payload.WithString("jobID", m_jobID);

  }

  return payload.View().WriteReadable();
}




