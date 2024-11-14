/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ValidationExceptionError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

ValidationExceptionError::ValidationExceptionError() : 
    m_code(ValidationExceptionErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ValidationExceptionError::ValidationExceptionError(JsonView jsonValue)
  : ValidationExceptionError()
{
  *this = jsonValue;
}

ValidationExceptionError& ValidationExceptionError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = ValidationExceptionErrorCodeMapper::GetValidationExceptionErrorCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetString("FieldName");

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationExceptionError::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", ValidationExceptionErrorCodeMapper::GetNameForValidationExceptionErrorCode(m_code));
  }

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", m_fieldName);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
