/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/Dimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

Dimension::Dimension() : 
    m_dimensionKeyHasBeenSet(false),
    m_dimensionValue(0),
    m_dimensionValueHasBeenSet(false)
{
}

Dimension::Dimension(JsonView jsonValue) : 
    m_dimensionKeyHasBeenSet(false),
    m_dimensionValue(0),
    m_dimensionValueHasBeenSet(false)
{
  *this = jsonValue;
}

Dimension& Dimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimensionKey"))
  {
    m_dimensionKey = jsonValue.GetString("dimensionKey");

    m_dimensionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dimensionValue"))
  {
    m_dimensionValue = jsonValue.GetInteger("dimensionValue");

    m_dimensionValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Dimension::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionKeyHasBeenSet)
  {
   payload.WithString("dimensionKey", m_dimensionKey);

  }

  if(m_dimensionValueHasBeenSet)
  {
   payload.WithInteger("dimensionValue", m_dimensionValue);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
