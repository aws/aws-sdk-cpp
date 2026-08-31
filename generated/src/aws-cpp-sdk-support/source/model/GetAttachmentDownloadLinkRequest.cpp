/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/GetAttachmentDownloadLinkRequest.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetAttachmentDownloadLinkRequest::SerializePayload() const {
  JsonValue payload;

  if (m_attachmentIdHasBeenSet) {
    payload.WithString("attachmentId", m_attachmentId);
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("dryRun", m_dryRun);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAttachmentDownloadLinkRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.GetAttachmentDownloadLink"));
  return headers;
}
