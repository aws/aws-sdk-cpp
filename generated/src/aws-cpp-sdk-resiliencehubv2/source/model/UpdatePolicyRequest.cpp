/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/UpdatePolicyRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_availabilitySloHasBeenSet) {
    payload.WithObject("availabilitySlo", m_availabilitySlo.Jsonize());
  }

  if (m_multiAzHasBeenSet) {
    payload.WithObject("multiAz", m_multiAz.Jsonize());
  }

  if (m_multiRegionHasBeenSet) {
    payload.WithObject("multiRegion", m_multiRegion.Jsonize());
  }

  if (m_dataRecoveryHasBeenSet) {
    payload.WithObject("dataRecovery", m_dataRecovery.Jsonize());
  }

  return payload.View().WriteReadable();
}
