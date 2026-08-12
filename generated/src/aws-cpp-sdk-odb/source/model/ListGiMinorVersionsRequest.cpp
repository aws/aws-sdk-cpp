/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ListGiMinorVersionsRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListGiMinorVersionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_giVersionHasBeenSet) {
    payload.WithString("giVersion", m_giVersion);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_shapeFamilyHasBeenSet) {
    payload.WithString("shapeFamily", m_shapeFamily);
  }

  if (m_availabilityZoneHasBeenSet) {
    payload.WithString("availabilityZone", m_availabilityZone);
  }

  if (m_availabilityZoneIdHasBeenSet) {
    payload.WithString("availabilityZoneId", m_availabilityZoneId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListGiMinorVersionsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.ListGiMinorVersions"));
  return headers;
}
