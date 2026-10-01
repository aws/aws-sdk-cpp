/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/GetRemediationsV2Request.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRemediationsV2Request::SerializePayload() const {
  JsonValue payload;

  if (m_targetUidHasBeenSet) {
    payload.WithString("TargetUid", m_targetUid);
  }

  if (m_metadataUidHasBeenSet) {
    payload.WithString("MetadataUid", m_metadataUid);
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("Filters", m_filters.Jsonize());
  }

  if (m_showGuidanceHasBeenSet) {
    payload.WithBool("ShowGuidance", m_showGuidance);
  }

  if (m_guidanceFormatHasBeenSet) {
    payload.WithString("GuidanceFormat", GuidanceFormatMapper::GetNameForGuidanceFormat(m_guidanceFormat));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
