/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/organizations/model/ListOutboundResponsibilityTransfersRequest.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListOutboundResponsibilityTransfersRequest::SerializePayload() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ResponsibilityTransferTypeMapper::GetNameForResponsibilityTransferType(m_type));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListOutboundResponsibilityTransfersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.ListOutboundResponsibilityTransfers"));
  return headers;
}
