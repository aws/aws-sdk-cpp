/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/GetTestRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetTestRequest::SerializePayload() const { return {}; }

void GetTestRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_testIdHasBeenSet) {
    ss << m_testId;
    uri.AddQueryStringParameter("testId", ss.str());
    ss.str("");
  }

  if (m_serviceArnHasBeenSet) {
    ss << m_serviceArn;
    uri.AddQueryStringParameter("serviceArn", ss.str());
    ss.str("");
  }
}
