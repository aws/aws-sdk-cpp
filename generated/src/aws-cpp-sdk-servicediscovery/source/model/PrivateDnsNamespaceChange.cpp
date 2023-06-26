/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/PrivateDnsNamespaceChange.h>
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

PrivateDnsNamespaceChange::PrivateDnsNamespaceChange() : 
    m_descriptionHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

PrivateDnsNamespaceChange::PrivateDnsNamespaceChange(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateDnsNamespaceChange& PrivateDnsNamespaceChange::operator =(JsonView jsonValue)
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

JsonValue PrivateDnsNamespaceChange::Jsonize() const
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
