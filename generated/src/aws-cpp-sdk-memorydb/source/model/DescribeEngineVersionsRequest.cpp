/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DescribeEngineVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEngineVersionsRequest::DescribeEngineVersionsRequest() : 
    m_engineVersionHasBeenSet(false),
    m_parameterGroupFamilyHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_defaultOnly(false),
    m_defaultOnlyHasBeenSet(false)
{
}

Aws::String DescribeEngineVersionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_parameterGroupFamilyHasBeenSet)
  {
   payload.WithString("ParameterGroupFamily", m_parameterGroupFamily);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_defaultOnlyHasBeenSet)
  {
   payload.WithBool("DefaultOnly", m_defaultOnly);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEngineVersionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.DescribeEngineVersions"));
  return headers;

}




