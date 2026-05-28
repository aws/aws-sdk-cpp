/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/UpdateAssertionRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAssertionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_assertionIdHasBeenSet) {
    payload.WithString("assertionId", m_assertionId);
  }

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  return payload.View().WriteReadable();
}
