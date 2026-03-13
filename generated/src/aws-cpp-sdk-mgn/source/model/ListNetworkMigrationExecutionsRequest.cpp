/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/ListNetworkMigrationExecutionsRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListNetworkMigrationExecutionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_networkMigrationDefinitionIDHasBeenSet) {
    payload.WithString("networkMigrationDefinitionID", m_networkMigrationDefinitionID);
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("filters", m_filters.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}
