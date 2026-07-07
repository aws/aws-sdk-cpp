/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/GetEnabledStandardsRequest.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetEnabledStandardsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_standardsSubscriptionArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> standardsSubscriptionArnsJsonList(m_standardsSubscriptionArns.size());
    for (unsigned standardsSubscriptionArnsIndex = 0; standardsSubscriptionArnsIndex < standardsSubscriptionArnsJsonList.GetLength();
         ++standardsSubscriptionArnsIndex) {
      standardsSubscriptionArnsJsonList[standardsSubscriptionArnsIndex].AsString(
          m_standardsSubscriptionArns[standardsSubscriptionArnsIndex]);
    }
    payload.WithArray("StandardsSubscriptionArns", std::move(standardsSubscriptionArnsJsonList));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_providersHasBeenSet) {
    Aws::Utils::Array<JsonValue> providersJsonList(m_providers.size());
    for (unsigned providersIndex = 0; providersIndex < providersJsonList.GetLength(); ++providersIndex) {
      providersJsonList[providersIndex].AsString(StandardsProviderMapper::GetNameForStandardsProvider(m_providers[providersIndex]));
    }
    payload.WithArray("Providers", std::move(providersJsonList));
  }

  return payload.View().WriteReadable();
}
