/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/RegisterOpentdfConfigRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String RegisterOpentdfConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithString("clientSecret", m_clientSecret);
  }

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  if (m_providerHasBeenSet) {
    payload.WithString("provider", m_provider);
  }

  return payload.View().WriteReadable();
}

void RegisterOpentdfConfigRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_dryRunHasBeenSet) {
    ss << m_dryRun;
    uri.AddQueryStringParameter("dryRun", ss.str());
    ss.str("");
  }
}
