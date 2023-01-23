/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/HttpProperties.h>
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

HttpProperties::HttpProperties() : 
    m_httpNameHasBeenSet(false)
{
}

HttpProperties::HttpProperties(JsonView jsonValue) : 
    m_httpNameHasBeenSet(false)
{
  *this = jsonValue;
}

HttpProperties& HttpProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpName"))
  {
    m_httpName = jsonValue.GetString("HttpName");

    m_httpNameHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpProperties::Jsonize() const
{
  JsonValue payload;

  if(m_httpNameHasBeenSet)
  {
   payload.WithString("HttpName", m_httpName);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
