/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SystemAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

SystemAttributes::SystemAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

SystemAttributes& SystemAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerEndpoint"))
  {
    m_customerEndpoint = jsonValue.GetObject("customerEndpoint");
    m_customerEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("systemEndpoint"))
  {
    m_systemEndpoint = jsonValue.GetObject("systemEndpoint");
    m_systemEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_customerEndpointHasBeenSet)
  {
   payload.WithObject("customerEndpoint", m_customerEndpoint.Jsonize());

  }

  if(m_systemEndpointHasBeenSet)
  {
   payload.WithObject("systemEndpoint", m_systemEndpoint.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
