/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateRecommenderConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRecommenderConfigurationRequest::UpdateRecommenderConfigurationRequest() : 
    m_recommenderIdHasBeenSet(false),
    m_updateRecommenderConfigurationHasBeenSet(false)
{
}

Aws::String UpdateRecommenderConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_updateRecommenderConfigurationHasBeenSet)
  {
   payload = m_updateRecommenderConfiguration.Jsonize();
  }

  return payload.View().WriteReadable();
}




