/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RequestInspection.h>
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

RequestInspection::RequestInspection() : 
    m_payloadType(PayloadType::NOT_SET),
    m_payloadTypeHasBeenSet(false),
    m_usernameFieldHasBeenSet(false),
    m_passwordFieldHasBeenSet(false)
{
}

RequestInspection::RequestInspection(JsonView jsonValue) : 
    m_payloadType(PayloadType::NOT_SET),
    m_payloadTypeHasBeenSet(false),
    m_usernameFieldHasBeenSet(false),
    m_passwordFieldHasBeenSet(false)
{
  *this = jsonValue;
}

RequestInspection& RequestInspection::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue RequestInspection::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
