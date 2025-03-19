/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/WhatsAppSignupCallbackResult.h>
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

WhatsAppSignupCallbackResult::WhatsAppSignupCallbackResult(JsonView jsonValue)
{
  *this = jsonValue;
}

WhatsAppSignupCallbackResult& WhatsAppSignupCallbackResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associateInProgressToken"))
  {
    m_associateInProgressToken = jsonValue.GetString("associateInProgressToken");
    m_associateInProgressTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("linkedAccountsWithIncompleteSetup"))
  {
    Aws::Map<Aws::String, JsonView> linkedAccountsWithIncompleteSetupJsonMap = jsonValue.GetObject("linkedAccountsWithIncompleteSetup").GetAllObjects();
    for(auto& linkedAccountsWithIncompleteSetupItem : linkedAccountsWithIncompleteSetupJsonMap)
    {
      m_linkedAccountsWithIncompleteSetup[linkedAccountsWithIncompleteSetupItem.first] = linkedAccountsWithIncompleteSetupItem.second.AsObject();
    }
    m_linkedAccountsWithIncompleteSetupHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppSignupCallbackResult::Jsonize() const
{
  JsonValue payload;

  if(m_associateInProgressTokenHasBeenSet)
  {
   payload.WithString("associateInProgressToken", m_associateInProgressToken);

  }

  if(m_linkedAccountsWithIncompleteSetupHasBeenSet)
  {
   JsonValue linkedAccountsWithIncompleteSetupJsonMap;
   for(auto& linkedAccountsWithIncompleteSetupItem : m_linkedAccountsWithIncompleteSetup)
   {
     linkedAccountsWithIncompleteSetupJsonMap.WithObject(linkedAccountsWithIncompleteSetupItem.first, linkedAccountsWithIncompleteSetupItem.second.Jsonize());
   }
   payload.WithObject("linkedAccountsWithIncompleteSetup", std::move(linkedAccountsWithIncompleteSetupJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
