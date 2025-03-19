/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SystemEndpointAttributes.h>
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

SystemEndpointAttributes::SystemEndpointAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

SystemEndpointAttributes& SystemEndpointAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("address"))
  {
    m_address = jsonValue.GetString("address");
    m_addressHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemEndpointAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("address", m_address);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
