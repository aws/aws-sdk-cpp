/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CreateRecommenderConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRecommenderConfigurationRequest::CreateRecommenderConfigurationRequest() : 
    m_createRecommenderConfigurationHasBeenSet(false)
{
}

Aws::String CreateRecommenderConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_createRecommenderConfigurationHasBeenSet)
  {
   payload = m_createRecommenderConfiguration.Jsonize();
  }

  return payload.View().WriteReadable();
}




