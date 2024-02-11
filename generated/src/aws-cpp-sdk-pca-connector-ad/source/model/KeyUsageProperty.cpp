/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/KeyUsageProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

KeyUsageProperty::KeyUsageProperty() : 
    m_propertyFlagsHasBeenSet(false),
    m_propertyType(KeyUsagePropertyType::NOT_SET),
    m_propertyTypeHasBeenSet(false)
{
}

KeyUsageProperty::KeyUsageProperty(JsonView jsonValue) : 
    m_propertyFlagsHasBeenSet(false),
    m_propertyType(KeyUsagePropertyType::NOT_SET),
    m_propertyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

KeyUsageProperty& KeyUsageProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyFlags"))
  {
    m_propertyFlags = jsonValue.GetObject("PropertyFlags");

    m_propertyFlagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropertyType"))
  {
    m_propertyType = KeyUsagePropertyTypeMapper::GetKeyUsagePropertyTypeForName(jsonValue.GetString("PropertyType"));

    m_propertyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyUsageProperty::Jsonize() const
{
  JsonValue payload;

  if(m_propertyFlagsHasBeenSet)
  {
   payload.WithObject("PropertyFlags", m_propertyFlags.Jsonize());

  }

  if(m_propertyTypeHasBeenSet)
  {
   payload.WithString("PropertyType", KeyUsagePropertyTypeMapper::GetNameForKeyUsagePropertyType(m_propertyType));
  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
