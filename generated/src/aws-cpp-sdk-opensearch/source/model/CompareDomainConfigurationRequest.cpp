/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/CompareDomainConfigurationRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CompareDomainConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceDomainArnHasBeenSet) {
    payload.WithString("SourceDomainArn", m_sourceDomainArn);
  }

  if (m_targetDomainArnHasBeenSet) {
    payload.WithString("TargetDomainArn", m_targetDomainArn);
  }

  if (m_categoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      categoriesJsonList[categoriesIndex].AsString(m_categories[categoriesIndex]);
    }
    payload.WithArray("Categories", std::move(categoriesJsonList));
  }

  return payload.View().WriteReadable();
}
