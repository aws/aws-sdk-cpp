/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/OpportunityInvitationPayload.h>
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

OpportunityInvitationPayload::OpportunityInvitationPayload(JsonView jsonValue)
{
  *this = jsonValue;
}

OpportunityInvitationPayload& OpportunityInvitationPayload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SenderContacts"))
  {
    Aws::Utils::Array<JsonView> senderContactsJsonList = jsonValue.GetArray("SenderContacts");
    for(unsigned senderContactsIndex = 0; senderContactsIndex < senderContactsJsonList.GetLength(); ++senderContactsIndex)
    {
      m_senderContacts.push_back(senderContactsJsonList[senderContactsIndex].AsObject());
    }
    m_senderContactsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReceiverResponsibilities"))
  {
    Aws::Utils::Array<JsonView> receiverResponsibilitiesJsonList = jsonValue.GetArray("ReceiverResponsibilities");
    for(unsigned receiverResponsibilitiesIndex = 0; receiverResponsibilitiesIndex < receiverResponsibilitiesJsonList.GetLength(); ++receiverResponsibilitiesIndex)
    {
      m_receiverResponsibilities.push_back(ReceiverResponsibilityMapper::GetReceiverResponsibilityForName(receiverResponsibilitiesJsonList[receiverResponsibilitiesIndex].AsString()));
    }
    m_receiverResponsibilitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Customer"))
  {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Project"))
  {
    m_project = jsonValue.GetObject("Project");
    m_projectHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunityInvitationPayload::Jsonize() const
{
  JsonValue payload;

  if(m_senderContactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> senderContactsJsonList(m_senderContacts.size());
   for(unsigned senderContactsIndex = 0; senderContactsIndex < senderContactsJsonList.GetLength(); ++senderContactsIndex)
   {
     senderContactsJsonList[senderContactsIndex].AsObject(m_senderContacts[senderContactsIndex].Jsonize());
   }
   payload.WithArray("SenderContacts", std::move(senderContactsJsonList));

  }

  if(m_receiverResponsibilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> receiverResponsibilitiesJsonList(m_receiverResponsibilities.size());
   for(unsigned receiverResponsibilitiesIndex = 0; receiverResponsibilitiesIndex < receiverResponsibilitiesJsonList.GetLength(); ++receiverResponsibilitiesIndex)
   {
     receiverResponsibilitiesJsonList[receiverResponsibilitiesIndex].AsString(ReceiverResponsibilityMapper::GetNameForReceiverResponsibility(m_receiverResponsibilities[receiverResponsibilitiesIndex]));
   }
   payload.WithArray("ReceiverResponsibilities", std::move(receiverResponsibilitiesJsonList));

  }

  if(m_customerHasBeenSet)
  {
   payload.WithObject("Customer", m_customer.Jsonize());

  }

  if(m_projectHasBeenSet)
  {
   payload.WithObject("Project", m_project.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
