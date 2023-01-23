/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSchemaRequest::CreateSchemaRequest() : 
    m_nameHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false)
{
}

Aws::String CreateSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", DomainMapper::GetNameForDomain(m_domain));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSchemaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateSchema"));
  return headers;

}




