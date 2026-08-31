/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/GetAttachmentUploadLinksRequest.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetAttachmentUploadLinksRequest::SerializePayload() const {
  JsonValue payload;

  if (m_fileNameHasBeenSet) {
    payload.WithString("fileName", m_fileName);
  }

  if (m_fileSizeBytesHasBeenSet) {
    payload.WithInt64("fileSizeBytes", m_fileSizeBytes);
  }

  if (m_uploadIdHasBeenSet) {
    payload.WithString("uploadId", m_uploadId);
  }

  if (m_uploadRangeHasBeenSet) {
    payload.WithObject("uploadRange", m_uploadRange.Jsonize());
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("dryRun", m_dryRun);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAttachmentUploadLinksRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.GetAttachmentUploadLinks"));
  return headers;
}
