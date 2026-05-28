/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/GetPolicyRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetPolicyRequest::SerializePayload() const { return {}; }

void GetPolicyRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_policyArnHasBeenSet) {
    ss << m_policyArn;
    uri.AddQueryStringParameter("policyArn", ss.str());
    ss.str("");
  }
}
