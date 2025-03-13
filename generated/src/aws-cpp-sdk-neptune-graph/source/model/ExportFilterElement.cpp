/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ExportFilterElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

ExportFilterElement::ExportFilterElement(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportFilterElement& ExportFilterElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("properties"))
  {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("properties").GetAllObjects();
    for(auto& propertiesItem : propertiesJsonMap)
    {
      m_properties[propertiesItem.first] = propertiesItem.second.AsObject();
    }
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportFilterElement::Jsonize() const
{
  JsonValue payload;

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithObject(propertiesItem.first, propertiesItem.second.Jsonize());
   }
   payload.WithObject("properties", std::move(propertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
