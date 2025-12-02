/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/nova-act/model/ListModelsRequest.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListModelsRequest::SerializePayload() const { return {}; }

void ListModelsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_clientCompatibilityVersionHasBeenSet) {
    ss << m_clientCompatibilityVersion;
    uri.AddQueryStringParameter("clientCompatibilityVersion", ss.str());
    ss.str("");
  }
}
