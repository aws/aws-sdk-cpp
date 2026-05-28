/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/UpdateUserJourneyRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateUserJourneyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_systemArnHasBeenSet) {
    payload.WithString("systemArn", m_systemArn);
  }

  if (m_userJourneyIdHasBeenSet) {
    payload.WithString("userJourneyId", m_userJourneyId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  return payload.View().WriteReadable();
}
