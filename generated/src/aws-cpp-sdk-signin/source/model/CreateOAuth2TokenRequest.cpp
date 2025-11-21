/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/CreateOAuth2TokenRequest.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOAuth2TokenRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tokenInputHasBeenSet) {
    payload = m_tokenInput.Jsonize();
  }

  return payload.View().WriteReadable();
}
