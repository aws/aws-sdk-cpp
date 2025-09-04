/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/FipsEndpoints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

FipsEndpoints::FipsEndpoints(JsonView jsonValue)
{
  *this = jsonValue;
}

FipsEndpoints& FipsEndpoints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("collectionEndpoint"))
  {
    m_collectionEndpoint = jsonValue.GetString("collectionEndpoint");
    m_collectionEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dashboardEndpoint"))
  {
    m_dashboardEndpoint = jsonValue.GetString("dashboardEndpoint");
    m_dashboardEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue FipsEndpoints::Jsonize() const
{
  JsonValue payload;

  if(m_collectionEndpointHasBeenSet)
  {
   payload.WithString("collectionEndpoint", m_collectionEndpoint);

  }

  if(m_dashboardEndpointHasBeenSet)
  {
   payload.WithString("dashboardEndpoint", m_dashboardEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
