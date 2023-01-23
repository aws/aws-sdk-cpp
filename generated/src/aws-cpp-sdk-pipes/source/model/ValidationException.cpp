/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/ValidationException.h>
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

ValidationException::ValidationException() : 
    m_fieldListHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ValidationException::ValidationException(JsonView jsonValue) : 
    m_fieldListHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldList"))
  {
    Aws::Utils::Array<JsonView> fieldListJsonList = jsonValue.GetArray("fieldList");
    for(unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex)
    {
      m_fieldList.push_back(fieldListJsonList[fieldListIndex].AsObject());
    }
    m_fieldListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_fieldListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldListJsonList(m_fieldList.size());
   for(unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex)
   {
     fieldListJsonList[fieldListIndex].AsObject(m_fieldList[fieldListIndex].Jsonize());
   }
   payload.WithArray("fieldList", std::move(fieldListJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
