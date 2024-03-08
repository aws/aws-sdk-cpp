/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AddDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddDataSourceRequest::AddDataSourceRequest() : 
    m_domainNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String AddDataSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_dataSourceTypeHasBeenSet)
  {
   payload.WithObject("DataSourceType", m_dataSourceType.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}




