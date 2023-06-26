/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeLaunchConfigurationTemplatesRequest::DescribeLaunchConfigurationTemplatesRequest() : 
    m_launchConfigurationTemplateIDsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeLaunchConfigurationTemplatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_launchConfigurationTemplateIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> launchConfigurationTemplateIDsJsonList(m_launchConfigurationTemplateIDs.size());
   for(unsigned launchConfigurationTemplateIDsIndex = 0; launchConfigurationTemplateIDsIndex < launchConfigurationTemplateIDsJsonList.GetLength(); ++launchConfigurationTemplateIDsIndex)
   {
     launchConfigurationTemplateIDsJsonList[launchConfigurationTemplateIDsIndex].AsString(m_launchConfigurationTemplateIDs[launchConfigurationTemplateIDsIndex]);
   }
   payload.WithArray("launchConfigurationTemplateIDs", std::move(launchConfigurationTemplateIDsJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




