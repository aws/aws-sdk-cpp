/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/UpdateAccountSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountSettingsRequest::UpdateAccountSettingsRequest() : 
    m_maxQueryTCU(0),
    m_maxQueryTCUHasBeenSet(false),
    m_queryPricingModel(QueryPricingModel::NOT_SET),
    m_queryPricingModelHasBeenSet(false)
{
}

Aws::String UpdateAccountSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxQueryTCUHasBeenSet)
  {
   payload.WithInteger("MaxQueryTCU", m_maxQueryTCU);

  }

  if(m_queryPricingModelHasBeenSet)
  {
   payload.WithString("QueryPricingModel", QueryPricingModelMapper::GetNameForQueryPricingModel(m_queryPricingModel));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAccountSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Timestream_20181101.UpdateAccountSettings"));
  return headers;

}




