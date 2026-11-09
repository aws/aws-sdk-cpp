/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/AddReplicationPeerRequest.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AddReplicationPeerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_peerDomainArnHasBeenSet) {
    payload.WithString("PeerDomainArn", m_peerDomainArn);
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("DryRun", m_dryRun);
  }

  return payload.View().WriteReadable();
}
