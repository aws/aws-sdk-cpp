/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

ValidationException::ValidationException() : 
    m_messageHasBeenSet(false),
    m_validationExceptionType(ValidationExceptionType::NOT_SET),
    m_validationExceptionTypeHasBeenSet(false)
{
}

ValidationException::ValidationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_validationExceptionType(ValidationExceptionType::NOT_SET),
    m_validationExceptionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationExceptionType"))
  {
    m_validationExceptionType = ValidationExceptionTypeMapper::GetValidationExceptionTypeForName(jsonValue.GetString("ValidationExceptionType"));

    m_validationExceptionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_validationExceptionTypeHasBeenSet)
  {
   payload.WithString("ValidationExceptionType", ValidationExceptionTypeMapper::GetNameForValidationExceptionType(m_validationExceptionType));
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
