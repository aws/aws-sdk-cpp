/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/GetTopPathStatisticsByTrafficRequest.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTopPathStatisticsByTrafficRequest::SerializePayload() const {
  JsonValue payload;

  if (m_webAclArnHasBeenSet) {
    payload.WithString("WebAclArn", m_webAclArn);
  }

  if (m_scopeHasBeenSet) {
    payload.WithString("Scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if (m_uriPathPrefixHasBeenSet) {
    payload.WithString("UriPathPrefix", m_uriPathPrefix);
  }

  if (m_timeWindowHasBeenSet) {
    payload.WithObject("TimeWindow", m_timeWindow.Jsonize());
  }

  if (m_botCategoryHasBeenSet) {
    payload.WithString("BotCategory", m_botCategory);
  }

  if (m_botOrganizationHasBeenSet) {
    payload.WithString("BotOrganization", m_botOrganization);
  }

  if (m_botNameHasBeenSet) {
    payload.WithString("BotName", m_botName);
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("Limit", m_limit);
  }

  if (m_numberOfTopTrafficBotsPerPathHasBeenSet) {
    payload.WithInteger("NumberOfTopTrafficBotsPerPath", m_numberOfTopTrafficBotsPerPath);
  }

  if (m_nextMarkerHasBeenSet) {
    payload.WithString("NextMarker", m_nextMarker);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTopPathStatisticsByTrafficRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20190729.GetTopPathStatisticsByTraffic"));
  return headers;
}
