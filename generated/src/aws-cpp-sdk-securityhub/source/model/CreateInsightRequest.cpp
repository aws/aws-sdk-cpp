/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CreateInsightRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInsightRequest::CreateInsightRequest() : 
    m_nameHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_groupByAttributeHasBeenSet(false)
{
}

Aws::String CreateInsightRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_groupByAttributeHasBeenSet)
  {
   payload.WithString("GroupByAttribute", m_groupByAttribute);

  }

  return payload.View().WriteReadable();
}




