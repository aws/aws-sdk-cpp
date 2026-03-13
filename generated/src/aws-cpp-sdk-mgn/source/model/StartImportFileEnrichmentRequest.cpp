/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/StartImportFileEnrichmentRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartImportFileEnrichmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_s3BucketSourceHasBeenSet) {
    payload.WithObject("s3BucketSource", m_s3BucketSource.Jsonize());
  }

  if (m_s3BucketTargetHasBeenSet) {
    payload.WithObject("s3BucketTarget", m_s3BucketTarget.Jsonize());
  }

  if (m_ipAssignmentStrategyHasBeenSet) {
    payload.WithString("ipAssignmentStrategy", IpAssignmentStrategyMapper::GetNameForIpAssignmentStrategy(m_ipAssignmentStrategy));
  }

  return payload.View().WriteReadable();
}
