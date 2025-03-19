/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/WhatsAppSetupFinalization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

WhatsAppSetupFinalization::WhatsAppSetupFinalization(JsonView jsonValue)
{
  *this = jsonValue;
}

WhatsAppSetupFinalization& WhatsAppSetupFinalization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associateInProgressToken"))
  {
    m_associateInProgressToken = jsonValue.GetString("associateInProgressToken");
    m_associateInProgressTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phoneNumbers"))
  {
    Aws::Utils::Array<JsonView> phoneNumbersJsonList = jsonValue.GetArray("phoneNumbers");
    for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
    {
      m_phoneNumbers.push_back(phoneNumbersJsonList[phoneNumbersIndex].AsObject());
    }
    m_phoneNumbersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phoneNumberParent"))
  {
    m_phoneNumberParent = jsonValue.GetString("phoneNumberParent");
    m_phoneNumberParentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("waba"))
  {
    m_waba = jsonValue.GetObject("waba");
    m_wabaHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppSetupFinalization::Jsonize() const
{
  JsonValue payload;

  if(m_associateInProgressTokenHasBeenSet)
  {
   payload.WithString("associateInProgressToken", m_associateInProgressToken);

  }

  if(m_phoneNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumbersJsonList(m_phoneNumbers.size());
   for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
   {
     phoneNumbersJsonList[phoneNumbersIndex].AsObject(m_phoneNumbers[phoneNumbersIndex].Jsonize());
   }
   payload.WithArray("phoneNumbers", std::move(phoneNumbersJsonList));

  }

  if(m_phoneNumberParentHasBeenSet)
  {
   payload.WithString("phoneNumberParent", m_phoneNumberParent);

  }

  if(m_wabaHasBeenSet)
  {
   payload.WithObject("waba", m_waba.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
