/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/FieldToProtect.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

FieldToProtect::FieldToProtect(JsonView jsonValue)
{
  *this = jsonValue;
}

FieldToProtect& FieldToProtect::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldType"))
  {
    m_fieldType = FieldToProtectTypeMapper::GetFieldToProtectTypeForName(jsonValue.GetString("FieldType"));
    m_fieldTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FieldKeys"))
  {
    Aws::Utils::Array<JsonView> fieldKeysJsonList = jsonValue.GetArray("FieldKeys");
    for(unsigned fieldKeysIndex = 0; fieldKeysIndex < fieldKeysJsonList.GetLength(); ++fieldKeysIndex)
    {
      m_fieldKeys.push_back(fieldKeysJsonList[fieldKeysIndex].AsString());
    }
    m_fieldKeysHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldToProtect::Jsonize() const
{
  JsonValue payload;

  if(m_fieldTypeHasBeenSet)
  {
   payload.WithString("FieldType", FieldToProtectTypeMapper::GetNameForFieldToProtectType(m_fieldType));
  }

  if(m_fieldKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldKeysJsonList(m_fieldKeys.size());
   for(unsigned fieldKeysIndex = 0; fieldKeysIndex < fieldKeysJsonList.GetLength(); ++fieldKeysIndex)
   {
     fieldKeysJsonList[fieldKeysIndex].AsString(m_fieldKeys[fieldKeysIndex]);
   }
   payload.WithArray("FieldKeys", std::move(fieldKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
