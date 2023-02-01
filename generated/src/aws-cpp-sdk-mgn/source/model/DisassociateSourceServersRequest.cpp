/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DisassociateSourceServersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateSourceServersRequest::DisassociateSourceServersRequest() : 
    m_applicationIDHasBeenSet(false),
    m_sourceServerIDsHasBeenSet(false)
{
}

Aws::String DisassociateSourceServersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIDHasBeenSet)
  {
   payload.WithString("applicationID", m_applicationID);

  }

  if(m_sourceServerIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceServerIDsJsonList(m_sourceServerIDs.size());
   for(unsigned sourceServerIDsIndex = 0; sourceServerIDsIndex < sourceServerIDsJsonList.GetLength(); ++sourceServerIDsIndex)
   {
     sourceServerIDsJsonList[sourceServerIDsIndex].AsString(m_sourceServerIDs[sourceServerIDsIndex]);
   }
   payload.WithArray("sourceServerIDs", std::move(sourceServerIDsJsonList));

  }

  return payload.View().WriteReadable();
}




