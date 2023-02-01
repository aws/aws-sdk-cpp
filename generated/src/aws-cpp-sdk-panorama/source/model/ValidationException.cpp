/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ValidationException.h>
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

ValidationException::ValidationException() : 
    m_errorArgumentsHasBeenSet(false),
    m_errorIdHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(ValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

ValidationException::ValidationException(JsonView jsonValue) : 
    m_errorArgumentsHasBeenSet(false),
    m_errorIdHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_reason(ValidationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = ValidationExceptionReasonMapper::GetValidationExceptionReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationException::Jsonize() const
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

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("Fields", std::move(fieldsJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", ValidationExceptionReasonMapper::GetNameForValidationExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
