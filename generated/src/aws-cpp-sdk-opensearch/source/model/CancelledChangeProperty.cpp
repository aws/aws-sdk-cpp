/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CancelledChangeProperty.h>
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

CancelledChangeProperty::CancelledChangeProperty() : 
    m_propertyNameHasBeenSet(false),
    m_cancelledValueHasBeenSet(false),
    m_activeValueHasBeenSet(false)
{
}

CancelledChangeProperty::CancelledChangeProperty(JsonView jsonValue) : 
    m_propertyNameHasBeenSet(false),
    m_cancelledValueHasBeenSet(false),
    m_activeValueHasBeenSet(false)
{
  *this = jsonValue;
}

CancelledChangeProperty& CancelledChangeProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyName"))
  {
    m_propertyName = jsonValue.GetString("PropertyName");

    m_propertyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CancelledValue"))
  {
    m_cancelledValue = jsonValue.GetString("CancelledValue");

    m_cancelledValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveValue"))
  {
    m_activeValue = jsonValue.GetString("ActiveValue");

    m_activeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue CancelledChangeProperty::Jsonize() const
{
  JsonValue payload;

  if(m_propertyNameHasBeenSet)
  {
   payload.WithString("PropertyName", m_propertyName);

  }

  if(m_cancelledValueHasBeenSet)
  {
   payload.WithString("CancelledValue", m_cancelledValue);

  }

  if(m_activeValueHasBeenSet)
  {
   payload.WithString("ActiveValue", m_activeValue);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
