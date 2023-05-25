/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing/model/Service.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pricing
{
namespace Model
{

Service::Service() : 
    m_serviceCodeHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
}

Service::Service(JsonView jsonValue) : 
    m_serviceCodeHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
  *this = jsonValue;
}

Service& Service::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceCode"))
  {
    m_serviceCode = jsonValue.GetString("ServiceCode");

    m_serviceCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeNames"))
  {
    Aws::Utils::Array<JsonView> attributeNamesJsonList = jsonValue.GetArray("AttributeNames");
    for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
    {
      m_attributeNames.push_back(attributeNamesJsonList[attributeNamesIndex].AsString());
    }
    m_attributeNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue Service::Jsonize() const
{
  JsonValue payload;

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("ServiceCode", m_serviceCode);

  }

  if(m_attributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeNamesJsonList(m_attributeNames.size());
   for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
   {
     attributeNamesJsonList[attributeNamesIndex].AsString(m_attributeNames[attributeNamesIndex]);
   }
   payload.WithArray("AttributeNames", std::move(attributeNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Pricing
} // namespace Aws
