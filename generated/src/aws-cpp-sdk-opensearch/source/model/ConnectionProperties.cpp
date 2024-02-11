/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ConnectionProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

ConnectionProperties::ConnectionProperties() : 
    m_endpointHasBeenSet(false),
    m_crossClusterSearchHasBeenSet(false)
{
}

ConnectionProperties::ConnectionProperties(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_crossClusterSearchHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionProperties& ConnectionProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossClusterSearch"))
  {
    m_crossClusterSearch = jsonValue.GetObject("CrossClusterSearch");

    m_crossClusterSearchHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionProperties::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_crossClusterSearchHasBeenSet)
  {
   payload.WithObject("CrossClusterSearch", m_crossClusterSearch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
