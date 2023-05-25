/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/PublicDnsNamespaceChange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

PublicDnsNamespaceChange::PublicDnsNamespaceChange() : 
    m_descriptionHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

PublicDnsNamespaceChange::PublicDnsNamespaceChange(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

PublicDnsNamespaceChange& PublicDnsNamespaceChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    m_properties = jsonValue.GetObject("Properties");

    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicDnsNamespaceChange::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithObject("Properties", m_properties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
