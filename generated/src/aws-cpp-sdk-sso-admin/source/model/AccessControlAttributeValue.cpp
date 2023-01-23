/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/AccessControlAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

AccessControlAttributeValue::AccessControlAttributeValue() : 
    m_sourceHasBeenSet(false)
{
}

AccessControlAttributeValue::AccessControlAttributeValue(JsonView jsonValue) : 
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

AccessControlAttributeValue& AccessControlAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Source"))
  {
    Aws::Utils::Array<JsonView> sourceJsonList = jsonValue.GetArray("Source");
    for(unsigned sourceIndex = 0; sourceIndex < sourceJsonList.GetLength(); ++sourceIndex)
    {
      m_source.push_back(sourceJsonList[sourceIndex].AsString());
    }
    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessControlAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceJsonList(m_source.size());
   for(unsigned sourceIndex = 0; sourceIndex < sourceJsonList.GetLength(); ++sourceIndex)
   {
     sourceJsonList[sourceIndex].AsString(m_source[sourceIndex]);
   }
   payload.WithArray("Source", std::move(sourceJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
