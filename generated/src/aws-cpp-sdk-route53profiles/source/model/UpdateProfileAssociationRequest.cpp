/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53profiles/model/UpdateProfileAssociationRequest.h>

#include <utility>

using namespace Aws::Route53Profiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateProfileAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("Priority", m_priority);
  }

  return payload.View().WriteReadable();
}
