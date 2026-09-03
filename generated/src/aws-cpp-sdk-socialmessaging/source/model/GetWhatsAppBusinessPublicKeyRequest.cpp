/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/socialmessaging/model/GetWhatsAppBusinessPublicKeyRequest.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetWhatsAppBusinessPublicKeyRequest::SerializePayload() const { return {}; }

void GetWhatsAppBusinessPublicKeyRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_originationPhoneNumberIdHasBeenSet) {
    ss << m_originationPhoneNumberId;
    uri.AddQueryStringParameter("originationPhoneNumberId", ss.str());
    ss.str("");
  }
}
