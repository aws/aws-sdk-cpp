/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

ConflictException::ConflictException() : 
    m_errorArgumentsHasBeenSet(false),
    m_errorIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

ConflictException::ConflictException(JsonView jsonValue) : 
    m_errorArgumentsHasBeenSet(false),
    m_errorIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictException& ConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorArguments"))
  {
    Aws::Utils::Array<JsonView> errorArgumentsJsonList = jsonValue.GetArray("ErrorArguments");
    for(unsigned errorArgumentsIndex = 0; errorArgumentsIndex < errorArgumentsJsonList.GetLength(); ++errorArgumentsIndex)
    {
      m_errorArguments.push_back(errorArgumentsJsonList[errorArgumentsIndex].AsObject());
    }
    m_errorArgumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorId"))
  {
    m_errorId = jsonValue.GetString("ErrorId");

    m_errorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictException::Jsonize() const
{
  JsonValue payload;

  if(m_errorArgumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorArgumentsJsonList(m_errorArguments.size());
   for(unsigned errorArgumentsIndex = 0; errorArgumentsIndex < errorArgumentsJsonList.GetLength(); ++errorArgumentsIndex)
   {
     errorArgumentsJsonList[errorArgumentsIndex].AsObject(m_errorArguments[errorArgumentsIndex].Jsonize());
   }
   payload.WithArray("ErrorArguments", std::move(errorArgumentsJsonList));

  }

  if(m_errorIdHasBeenSet)
  {
   payload.WithString("ErrorId", m_errorId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
