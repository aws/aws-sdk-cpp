/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/neptunedata/model/StartIndexRebuildRequest.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String StartIndexRebuildRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

void StartIndexRebuildRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_scopeHasBeenSet) {
    ss << ScopeMapper::GetNameForScope(m_scope);
    uri.AddQueryStringParameter("scope", ss.str());
    ss.str("");
  }

  if (m_concurrencyHasBeenSet) {
    ss << m_concurrency;
    uri.AddQueryStringParameter("concurrency", ss.str());
    ss.str("");
  }

  if (m_writeBufferSizeHasBeenSet) {
    ss << WriteBufferSizeMapper::GetNameForWriteBufferSize(m_writeBufferSize);
    uri.AddQueryStringParameter("writeBufferSize", ss.str());
    ss.str("");
  }
}
