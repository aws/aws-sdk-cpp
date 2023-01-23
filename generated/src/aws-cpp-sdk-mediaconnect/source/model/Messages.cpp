/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Messages.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

Messages::Messages() : 
    m_errorsHasBeenSet(false)
{
}

Messages::Messages(JsonView jsonValue) : 
    m_errorsHasBeenSet(false)
{
  *this = jsonValue;
}

Messages& Messages::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsString());
    }
    m_errorsHasBeenSet = true;
  }

  return *this;
}

JsonValue Messages::Jsonize() const
{
  JsonValue payload;

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsString(m_errors[errorsIndex]);
   }
   payload.WithArray("errors", std::move(errorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
