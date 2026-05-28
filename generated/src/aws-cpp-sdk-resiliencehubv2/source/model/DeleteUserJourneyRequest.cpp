/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/DeleteUserJourneyRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteUserJourneyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_systemArnHasBeenSet) {
    payload.WithString("systemArn", m_systemArn);
  }

  if (m_userJourneyIdHasBeenSet) {
    payload.WithString("userJourneyId", m_userJourneyId);
  }

  return payload.View().WriteReadable();
}
