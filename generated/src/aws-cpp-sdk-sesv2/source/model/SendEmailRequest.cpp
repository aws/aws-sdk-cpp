/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SendEmailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendEmailRequest::SerializePayload() const
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

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

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

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  if(m_emailTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> emailTagsJsonList(m_emailTags.size());
   for(unsigned emailTagsIndex = 0; emailTagsIndex < emailTagsJsonList.GetLength(); ++emailTagsIndex)
   {
     emailTagsJsonList[emailTagsIndex].AsObject(m_emailTags[emailTagsIndex].Jsonize());
   }
   payload.WithArray("EmailTags", std::move(emailTagsJsonList));

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

  if(m_listManagementOptionsHasBeenSet)
  {
   payload.WithObject("ListManagementOptions", m_listManagementOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}



SendEmailRequest::EndpointParameters SendEmailRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (EndpointIdHasBeenSet()) {
        parameters.emplace_back(Aws::String("EndpointId"), this->GetEndpointId(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


