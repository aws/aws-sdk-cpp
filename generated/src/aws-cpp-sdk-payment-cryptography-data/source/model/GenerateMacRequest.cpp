/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/GenerateMacRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PaymentCryptographyData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GenerateMacRequest::GenerateMacRequest() : 
    m_generationAttributesHasBeenSet(false),
    m_keyIdentifierHasBeenSet(false),
    m_macLength(0),
    m_macLengthHasBeenSet(false),
    m_messageDataHasBeenSet(false)
{
}

Aws::String GenerateMacRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_generationAttributesHasBeenSet)
  {
   payload.WithObject("GenerationAttributes", m_generationAttributes.Jsonize());

  }

  if(m_keyIdentifierHasBeenSet)
  {
   payload.WithString("KeyIdentifier", m_keyIdentifier);

  }

  if(m_macLengthHasBeenSet)
  {
   payload.WithInteger("MacLength", m_macLength);

  }

  if(m_messageDataHasBeenSet)
  {
   payload.WithString("MessageData", m_messageData);

  }

  return payload.View().WriteReadable();
}




