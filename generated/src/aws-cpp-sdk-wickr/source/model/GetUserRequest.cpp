/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/GetUserRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetUserRequest::SerializePayload() const { return {}; }

void GetUserRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_startTimeHasBeenSet) {
    ss << m_startTime.SecondsWithMSPrecision();
    uri.AddQueryStringParameter("startTime", ss.str());
    ss.str("");
  }

  if (m_endTimeHasBeenSet) {
    ss << m_endTime.SecondsWithMSPrecision();
    uri.AddQueryStringParameter("endTime", ss.str());
    ss.str("");
  }
}
