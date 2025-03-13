/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/GetManagedNotificationEventRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetManagedNotificationEventRequest::SerializePayload() const
{
  return {};
}

void GetManagedNotificationEventRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_localeHasBeenSet)
    {
      ss << LocaleCodeMapper::GetNameForLocaleCode(m_locale);
      uri.AddQueryStringParameter("locale", ss.str());
      ss.str("");
    }

}



