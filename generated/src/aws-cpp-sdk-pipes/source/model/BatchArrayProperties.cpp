/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/BatchArrayProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

BatchArrayProperties::BatchArrayProperties() : 
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

BatchArrayProperties::BatchArrayProperties(JsonView jsonValue) : 
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

BatchArrayProperties& BatchArrayProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInteger("Size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchArrayProperties::Jsonize() const
{
  JsonValue payload;

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("Size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
