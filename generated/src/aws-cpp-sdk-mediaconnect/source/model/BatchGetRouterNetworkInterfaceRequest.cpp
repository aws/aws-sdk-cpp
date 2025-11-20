/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mediaconnect/model/BatchGetRouterNetworkInterfaceRequest.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String BatchGetRouterNetworkInterfaceRequest::SerializePayload() const { return {}; }

void BatchGetRouterNetworkInterfaceRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_arnsHasBeenSet) {
    for (const auto& item : m_arns) {
      ss << item;
      uri.AddQueryStringParameter("arns", ss.str());
      ss.str("");
    }
  }
}
