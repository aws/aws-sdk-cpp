/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/DescribeAttachmentUploadStatusRequest.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeAttachmentUploadStatusRequest::SerializePayload() const {
  JsonValue payload;

  if (m_uploadIdHasBeenSet) {
    payload.WithString("uploadId", m_uploadId);
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("dryRun", m_dryRun);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAttachmentUploadStatusRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeAttachmentUploadStatus"));
  return headers;
}
