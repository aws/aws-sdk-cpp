/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/GetSystemRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetSystemRequest::SerializePayload() const { return {}; }

void GetSystemRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_systemArnHasBeenSet) {
    ss << m_systemArn;
    uri.AddQueryStringParameter("systemArn", ss.str());
    ss.str("");
  }
}
