/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RequestInspectionACFP.h>
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

RequestInspectionACFP::RequestInspectionACFP() : 
    m_payloadType(PayloadType::NOT_SET),
    m_payloadTypeHasBeenSet(false),
    m_usernameFieldHasBeenSet(false),
    m_passwordFieldHasBeenSet(false),
    m_emailFieldHasBeenSet(false),
    m_phoneNumberFieldsHasBeenSet(false),
    m_addressFieldsHasBeenSet(false)
{
}

RequestInspectionACFP::RequestInspectionACFP(JsonView jsonValue) : 
    m_payloadType(PayloadType::NOT_SET),
    m_payloadTypeHasBeenSet(false),
    m_usernameFieldHasBeenSet(false),
    m_passwordFieldHasBeenSet(false),
    m_emailFieldHasBeenSet(false),
    m_phoneNumberFieldsHasBeenSet(false),
    m_addressFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

RequestInspectionACFP& RequestInspectionACFP::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PayloadType"))
  {
    m_payloadType = PayloadTypeMapper::GetPayloadTypeForName(jsonValue.GetString("PayloadType"));

    m_payloadTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsernameField"))
  {
    m_usernameField = jsonValue.GetObject("UsernameField");

    m_usernameFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PasswordField"))
  {
    m_passwordField = jsonValue.GetObject("PasswordField");

    m_passwordFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailField"))
  {
    m_emailField = jsonValue.GetObject("EmailField");

    m_emailFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumberFields"))
  {
    Aws::Utils::Array<JsonView> phoneNumberFieldsJsonList = jsonValue.GetArray("PhoneNumberFields");
    for(unsigned phoneNumberFieldsIndex = 0; phoneNumberFieldsIndex < phoneNumberFieldsJsonList.GetLength(); ++phoneNumberFieldsIndex)
    {
      m_phoneNumberFields.push_back(phoneNumberFieldsJsonList[phoneNumberFieldsIndex].AsObject());
    }
    m_phoneNumberFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddressFields"))
  {
    Aws::Utils::Array<JsonView> addressFieldsJsonList = jsonValue.GetArray("AddressFields");
    for(unsigned addressFieldsIndex = 0; addressFieldsIndex < addressFieldsJsonList.GetLength(); ++addressFieldsIndex)
    {
      m_addressFields.push_back(addressFieldsJsonList[addressFieldsIndex].AsObject());
    }
    m_addressFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestInspectionACFP::Jsonize() const
{
  JsonValue payload;

  if(m_payloadTypeHasBeenSet)
  {
   payload.WithString("PayloadType", PayloadTypeMapper::GetNameForPayloadType(m_payloadType));
  }

  if(m_usernameFieldHasBeenSet)
  {
   payload.WithObject("UsernameField", m_usernameField.Jsonize());

  }

  if(m_passwordFieldHasBeenSet)
  {
   payload.WithObject("PasswordField", m_passwordField.Jsonize());

  }

  if(m_emailFieldHasBeenSet)
  {
   payload.WithObject("EmailField", m_emailField.Jsonize());

  }

  if(m_phoneNumberFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumberFieldsJsonList(m_phoneNumberFields.size());
   for(unsigned phoneNumberFieldsIndex = 0; phoneNumberFieldsIndex < phoneNumberFieldsJsonList.GetLength(); ++phoneNumberFieldsIndex)
   {
     phoneNumberFieldsJsonList[phoneNumberFieldsIndex].AsObject(m_phoneNumberFields[phoneNumberFieldsIndex].Jsonize());
   }
   payload.WithArray("PhoneNumberFields", std::move(phoneNumberFieldsJsonList));

  }

  if(m_addressFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressFieldsJsonList(m_addressFields.size());
   for(unsigned addressFieldsIndex = 0; addressFieldsIndex < addressFieldsJsonList.GetLength(); ++addressFieldsIndex)
   {
     addressFieldsJsonList[addressFieldsIndex].AsObject(m_addressFields[addressFieldsIndex].Jsonize());
   }
   payload.WithArray("AddressFields", std::move(addressFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
