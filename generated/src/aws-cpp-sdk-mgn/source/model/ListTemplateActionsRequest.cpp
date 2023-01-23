/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ListTemplateActionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTemplateActionsRequest::ListTemplateActionsRequest() : 
    m_filtersHasBeenSet(false),
    m_launchConfigurationTemplateIDHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListTemplateActionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("filters", m_filters.Jsonize());

  }

  if(m_launchConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("launchConfigurationTemplateID", m_launchConfigurationTemplateID);

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




