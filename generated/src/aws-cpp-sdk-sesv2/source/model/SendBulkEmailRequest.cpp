/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SendBulkEmailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendBulkEmailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fromEmailAddressHasBeenSet)
  {
   payload.WithString("FromEmailAddress", m_fromEmailAddress);

  }

  if(m_fromEmailAddressIdentityArnHasBeenSet)
  {
   payload.WithString("FromEmailAddressIdentityArn", m_fromEmailAddressIdentityArn);

  }

  if(m_replyToAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replyToAddressesJsonList(m_replyToAddresses.size());
   for(unsigned replyToAddressesIndex = 0; replyToAddressesIndex < replyToAddressesJsonList.GetLength(); ++replyToAddressesIndex)
   {
     replyToAddressesJsonList[replyToAddressesIndex].AsString(m_replyToAddresses[replyToAddressesIndex]);
   }
   payload.WithArray("ReplyToAddresses", std::move(replyToAddressesJsonList));

  }

  if(m_feedbackForwardingEmailAddressHasBeenSet)
  {
   payload.WithString("FeedbackForwardingEmailAddress", m_feedbackForwardingEmailAddress);

  }

  if(m_feedbackForwardingEmailAddressIdentityArnHasBeenSet)
  {
   payload.WithString("FeedbackForwardingEmailAddressIdentityArn", m_feedbackForwardingEmailAddressIdentityArn);

  }

  if(m_defaultEmailTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultEmailTagsJsonList(m_defaultEmailTags.size());
   for(unsigned defaultEmailTagsIndex = 0; defaultEmailTagsIndex < defaultEmailTagsJsonList.GetLength(); ++defaultEmailTagsIndex)
   {
     defaultEmailTagsJsonList[defaultEmailTagsIndex].AsObject(m_defaultEmailTags[defaultEmailTagsIndex].Jsonize());
   }
   payload.WithArray("DefaultEmailTags", std::move(defaultEmailTagsJsonList));

  }

  if(m_defaultContentHasBeenSet)
  {
   payload.WithObject("DefaultContent", m_defaultContent.Jsonize());

  }

  if(m_bulkEmailEntriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bulkEmailEntriesJsonList(m_bulkEmailEntries.size());
   for(unsigned bulkEmailEntriesIndex = 0; bulkEmailEntriesIndex < bulkEmailEntriesJsonList.GetLength(); ++bulkEmailEntriesIndex)
   {
     bulkEmailEntriesJsonList[bulkEmailEntriesIndex].AsObject(m_bulkEmailEntries[bulkEmailEntriesIndex].Jsonize());
   }
   payload.WithArray("BulkEmailEntries", std::move(bulkEmailEntriesJsonList));

  }

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_tenantNameHasBeenSet)
  {
   payload.WithString("TenantName", m_tenantName);

  }

  return payload.View().WriteReadable();
}



SendBulkEmailRequest::EndpointParameters SendBulkEmailRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (EndpointIdHasBeenSet()) {
        parameters.emplace_back(Aws::String("EndpointId"), this->GetEndpointId(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


